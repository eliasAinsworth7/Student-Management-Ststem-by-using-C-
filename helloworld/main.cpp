#include <iostream>
#include <vector>
class person {
    protected:
        std::string name;
        int age;

    public:
        person(std::string n, int a) : name(n), age(a) {}
        std::string getName() const { return name; }
        int getAge() const { return age; }
        void displayPerson() const { std::cout << "Name: " << name << ", Age: " << age << std::endl; }
};
class Student : public person {
    private:
        char grade;
        const int studentID;

    public:
        Student(std::string n, int a, char g, int id) : person(n, a), grade(g), studentID(id) {}
        char getGrade() const { return grade; }
        int getStudentID() const { return studentID; }
        void displayStudent() const {
            displayPerson();
            std::cout << "Grade: " << grade << ", Student ID: " << studentID << std::endl;
        }
        

};
class StudentRecords {
    private:
        std::vector<Student> students;

    public:
        void addStudent(const Student& student) {
            students.push_back(student);
        }

        void displayStudents() const {
            for (const auto& student : students) {
                student.displayStudent();
            }
        }

        std::vector<Student>& getStudents() {
            return students;
        }
};
class InputHandler {
    public:
        static Student createStudent() {
            std::string name;
            int age;
            char grade;
            int studentID;

            std::cout << "Enter name: "; std::cin >> name;
            std::cout << "Enter age: "; std::cin >> age;
            std::cout << "Enter grade: "; std::cin >> grade;
            std::cout << "Enter student ID: "; std::cin >> studentID;

            return Student(name, age, grade, studentID);
        }
};

/*
class SortingHandler {
    public:
        static void bubbleSort(std::vector<Student>& students) {
            int n = students.size();
            for (int i = 0; i < n - 1; ++i) {
                for (int j = 0; j < n - i - 1; ++j) {
                    if (students[j].getStudentID() > students[j + 1].getStudentID()) {
                        swap(students[j], students[j + 1]);
                    }
                }
            }
        }
        static void swap(Student& first, Student& second) {
            Student temp = first;
            first = second;
            second = temp;

        }
        
        
};*/

int main() {
    StudentRecords studentRecords;

    // Add sample students
    studentRecords.addStudent(Student("Alice", 20, 'A', 1004));
    studentRecords.addStudent(Student("Bob", 22, 'B', 1002));
    studentRecords.addStudent(Student("Charlie", 21, 'A', 1003));

    // Display students
    std::cout << "All Students:\n";
    studentRecords.displayStudents();

    // Sort students by ID using Bubble Sort
    // SortingHandler::bubbleSort(studentRecords.getStudents());

    // Display sorted students
    /*std::cout << "\nSorted Students by ID:\n";
    studentRecords.displayStudents();*/

    return 0;
}
