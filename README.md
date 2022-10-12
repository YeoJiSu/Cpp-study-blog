# 🎡 Cpp-study-blog
> ### 부산대학교 2학년 1학기 채흥석 교수님의 『C++프로그래밍과실습』 강의의 실습 내용을 정리한 저장소입니다.
> 📌 C++ 을 통해 객체 지향의 개념을 이해하고, C++ 도구를 사용하여 개발을 합니다.

# 📁 1
> c++ 에 대한 기초 프로그래밍을 합니다.
### 🌷 키워드 
``` (1)  cin, cout ``` <br>
``` (2)  while, if ``` 
### 🌷 프로그램 내용
[실행 예시](1/img.png)

    1. 이름과 점수(정수)를 입력 받아서 등급을 출력한다.
    2. 음수 또는 100 초과 값이 입력되면 프로그램은 종료된다.
    
### 🌷 제약 조건
    1. C++ 언어에서 입/출력 지원을 위한 cin과 cout을 사용한다.

# 📁 2
> Type에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1) Built-in types``` <br>
``` (2) string``` <br>
``` (3) numeric_limits<T>```
### 🌷 프로그램 내용
[실행 예시](2/img.png)

    1. 타입이름을 문자열로서 입력받아서 각 타입이 표현할 수 있는 최소값과 최대값을 출력한다. (이때, 대소문자를 구분 X)
    2. 위 과정은 반복적으로 수행된다.
    3. “quit” 문자열이 입력되면 반복문은 종료된다.
    4. 반복문이 종료되면 각 타입 별로 실제로 입력된 횟수를 출력한다.
    
### 🌷 제약 조건
    1. C++ 언어에서 입/출력 지원을 위한 cin과 cout를 사용한다.
    2. 문자열은 C++의 string을 이용한다.
    3. numeric_limits<T>를 이용한다.

# 📁 3
> Type에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1) new, delete ``` <br>

### 🌷 프로그램 내용
[실행 예시](3/img.png)

    점수를 입력 받고, 합계, 평균을 계산하는 프로그램이다.
    1. 최대 입력 가능한 점수의 개수를 입력 받는다.
    2. “add” 명령으로 점수를 입력한다.
    3. “sum” 명령으로 합계를 출력한다. 
    4. “average” 명령으로 평균을 출력한다. (단 입력된 점수가 없는 경우에는 “1개 이상의 점수가 입력되어야 한다”를 출력한다.)
    5. “list” 명령으로 입력 순서대로 점수를 출력한다.
    6. “quit” 명령으로 프로그램을 종료시킨다.


### 🌷 제약 조건
    1. new와 delete를 이용해서 점수들을 저장할 메모리를 할당한다.
    2. “add”, “sum”, “average”, “quit”은 대소문자를 구분하지 않는다.
    3. 점수는 0부터 100사이의 정수이다. 만약 이 범위를 벗어나면 “Score should be between 0 and 100＂를 출력한다.
    4. 지정한 개수 초과의 점수가 입력되면  “Too many scores”를 출력한다.


# 📁 4
> Type, control structure, function 에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1) struct``` <br>
``` (2) vector, iterator``` <br>

### 🌷 프로그램 내용
[실행 예시](4/img.png)

    1. 최대 입력 가능한 사람 수를 입력 받는다.
    2. 이름, 국어, 영어, 수학 성적을 입력한다.
    3. 입력 받을 사람 수만큼 다 입력이 되고 나면, total 순으로 출력한다. 
    4. 이 때, 각 사람의 total 값과 평균 값을 모두 출력한다. 


### 🌷 제약 조건
<details>
<summary>  vector&lt;StudentInfo&gt;  </summary>
<div markdown="1">

``` cpp
// vector<StudentInfo> 참고.
const int SUBJECT_NO = 3 ;

struct StudentInfo {
	string name ;
	int scores[SUBJECT_NO] ;
	int sum ;
	float average ;
} ;
```

</div>
</details>


    1. vector<StudentInfo> 를 사용한다.
    2. StudentInfo를 출력하는 함수를 정의한다. 
    3. vector<StudentInfo>를 출력하는 함수를 정의한다.
    4. iterator를 사용한다. 


# 📁 5
>  함수 에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1) enum,struct ``` <br>
``` (2) function call``` <br>
``` (3) const parameter``` <br>
``` (4) Call by reference``` <br>
``` (5) const_iterator``` <br>
### 🌷 프로그램 내용
[실행 예시](5/img.png)

    1. ADD를 사용하여 직사각형의 가로와 세로를 입력받는다.
    2. PRINT를 입력하면 모든 직사각형들을 출력한다.
    3. SORT를 입력하면 직사각형의 넓이 순으로 출력한다.
    4. CLEAR를 입력하면 직사각형들이 모두 삭제된다.
    5. EXIT을 입력하면 프로그램이 종료된다.

### 🌷 제약 조건

<details>
<summary>  Rectangle 구조체  </summary>
<div markdown="1">

``` cpp
struct Rectangle {
	int width ;
	int height ;
} ;
``` 

</div>
</details>

<details>
<summary>  CommandKind enum  </summary>
<div markdown="1">

``` cpp
enum CommandKind { ADD, SORT, PRINT, CLEAR, EXIT, INVALID} ;
``` 

</div>
</details>

    1. Rectangle 구조체와 CommandKind enum을 사용한다. 


# 📁 6
>  함수 에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1) enum,struct ``` <br>
``` (2) function call``` <br>
``` (3) const parameter``` <br>
``` (4) Call by reference``` <br>
``` (5) const_iterator``` <br>
### 🌷 프로그램 내용
[실행 예시](6/img.png)

    1. School 클래스 안의 addStudent(학생) 함수로 학생을 추가합니다. 
    2. School 클래스 안의 print() 함수로 학생을 출력하고, 
    3. School 클래스 안의 sort() 함수로 점수별로 학생을 출력합니다. 
    4. School 클래스 안의 findStudentWithName(이름) 함수로 학생을 찾아 리턴합니다. 
    4. Student 클래스 안의 setGPA(점수) 함수로 학생의 점수를 넣습니다. 
    5. Student 클래스 안의 setName(이름) 함수로 학생의 이름을 넣습니다. 


### 🌷 제약 조건

<details>
<summary>  Student 클래스와 School 클래스  </summary>
<div markdown="1">

``` cpp
class Student {
private:
	string name ;
	float gpa ;

public:
	…
} ;

class School {
private:
	string schoolName ;
	vector<Student> students ;

public:
	…
} ;

``` 

</div>
</details>


    1. Student와 School 클래스를 정의한다. 


# 📁 7
>  클래스 에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1) class constructor & destructor ``` <br>
### 🌷 프로그램 내용
[실행 예시](7/img.png) 
    
    1.  MyString 클래스의 생성자와 소멸자를 통해 구현합니다. 
    2.  MyString 클래스의 isEqual(문자열) 함수는 해당 문자열이 같은지 판단합니다. 
    3.  MyString 클래스의 print() 함수는 문자열을 출력합니다.

### 🌷 제약 조건
<details>
<summary>  MyString 클래스  </summary>
<div markdown="1">

``` cpp
class MyString {
	char* str ;
	int size ;
public:
	MyString(const char* const s) …
} ;

``` 

</div>
</details>

    1. MyString 클래스를 정의한다. 


# 📁 8
>  오퍼레이터 오버로딩에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1)  operator overloading ``` <br>
### 🌷 프로그램 내용
[실행 예시](8/img.png) 
    
    1. cin 으로 matrix를 입력받습니다.
    2. + 연산자로 matrix 두개를 더합니다.
    3. * 연산자로 상수와 matrix를 곱합니다.
    4. cout으로 matrix를 출력합니다.

### 🌷 제약 조건
<details>
<summary>  Matrix 클래스  </summary>
<div markdown="1">

``` cpp
class Matrix {
	int** values ;
	int row, column ;
public:
	…
} ;
``` 

</div>
</details>

    1. Matrix 클래스를 정의한다. 


# 📁 9
>  상속에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1)  inheritance ``` <br>
### 🌷 프로그램 내용
[실행 예시](9/img.png) 

    1. cout으로 Employee 를 출력합니다.
    2. Manager 클래스의 addEmployee 함수로 직원을 넣습니다.
    3. cout으로 Manager 를 출력합니다. 

### 🌷 제약 조건
<details>
<summary>  EmployeeLevel enum  </summary>
<div markdown="1">

``` cpp
enum EmployeeLevel { 사원, 대리, 과장, 차장, 부장} ;
``` 

</div>
</details>
<details>
<summary>  Employee 클래스와 이를 상속 받는 Manager 클래스  </summary>
<div markdown="1">

``` cpp
class Employee {
	string name ;
	const EmployeeLevel level ;
public:
	…
} ;

class Manager : public Employee {
  vector<Employee*> group ;
public:
  …
} ;

``` 

</div>
</details>

    1. enum EmployeeLevel를 정의한다. 
    2. Employee 클래스와 이를 상속 받는 Manager 클래스를 정의한다.
# 📁 10
>  Polymorphism 에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1)  Polymorphism ``` <br>
### 🌷 프로그램 내용
[실행 예시](10/img.png)  <br>
[상속 ](10/img2.png)

    1. 도형을 저장하고 출력하는 프로그램입니다.


### 🌷 제약 조건
<details>
<summary>  enum Color와 Shape 클래스  </summary>
<div markdown="1">

``` cpp
enum Color {RED, BLUE, YELLOW} ;

class Shape {
	Color lineColor ;
public:
	Color getLineColor() const { return lineColor ; }
	virtual Shape* clone() const = 0 ;
	virtual void print() const = 0 ;
	virtual float getLength() const = 0 ;
} ;
``` 

</div>
</details>

    1. enum Color를 정의한다. 
    2. Shape 클래스를 정의한다.

# 📁 11
> 더 많은 topic 들에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1)  class, vector, inheritance``` <br>
### 🌷 프로그램 내용
[실행 예시](11/img.png) 

    1. ItemList 에 CPU 명과 정보들을 넣을 수 있습니다.
    2. ItemList 클래스의 addItem 함수로 CPU 정보를 넣습니다.
    3. ItemList 클래스의 removeItem 함수로 CPU 정보를 삭제합니다. 
    4. ItemList 클래스의 print() 함수로 CPU 정보를 출력합니다.


# 📁 12
> Template class 에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1) Template class ``` <br>
### 🌷 프로그램 내용
[실행 예시](12/img.png) 

    1. List클래스의 add함수는 원소를 추가합니다.
    2. List클래스의 find(문자열)함수는 문자열이 일치하면 true를 불일치하면 false를 리턴합니다.  

# 📁 13
>  Exception Handling 에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1)  Exception Handling ``` <br>
### 🌷 프로그램 내용
[실행 예시](13/img.png) 

    1. StackException에 대한 프로그래밍을 합니다. 
    2. destructor, copy constructor, assignment operator를 구현합니다.
    3. 스택의 pop(), push(), print()를 구현합니다.

# 📁 14
>  namespace 에 대해 배우고, 그에 대한 실습을 진행합니다. 
### 🌷 키워드 
``` (1) namespace ``` <br>
### 🌷 프로그램 내용
[실행 예시](14/img.png) 
    
    1. 직사각형, 원을 입력 받고 출력합니다. 
    2. addElement 함수로 도형을 추가합니다.
    3. getElement 함수로 도형을 출력합니다.
    4. removeElement 함수로 도형을 삭제합니다. 

