# π‘ Cpp-study-blog
> ### λΆμ°λνκ΅ 2νλ 1νκΈ° μ±ν₯μ κ΅μλμ γC++νλ‘κ·Έλλ°κ³Όμ€μ΅γ κ°μμ μ€μ΅ λ΄μ©μ μ λ¦¬ν μ μ₯μμλλ€.
> π C++ μ ν΅ν΄ κ°μ²΄ μ§ν₯μ κ°λμ μ΄ν΄νκ³ , C++ λκ΅¬λ₯Ό μ¬μ©νμ¬ κ°λ°μ ν©λλ€.

# π 1
> c++ μ λν κΈ°μ΄ νλ‘κ·Έλλ°μ ν©λλ€.
### π· ν€μλ 
``` (1)  cin, cout ``` <br>
``` (2)  while, if ``` 
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](1/img.png)

    1. μ΄λ¦κ³Ό μ μ(μ μ)λ₯Ό μλ ₯ λ°μμ λ±κΈμ μΆλ ₯νλ€.
    2. μμ λλ 100 μ΄κ³Ό κ°μ΄ μλ ₯λλ©΄ νλ‘κ·Έλ¨μ μ’λ£λλ€.
    
### π· μ μ½ μ‘°κ±΄
    1. C++ μΈμ΄μμ μ/μΆλ ₯ μ§μμ μν cinκ³Ό coutμ μ¬μ©νλ€.

# π 2
> Typeμ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1) Built-in types``` <br>
``` (2) string``` <br>
``` (3) numeric_limits<T>```
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](2/img.png)

    1. νμμ΄λ¦μ λ¬Έμμ΄λ‘μ μλ ₯λ°μμ κ° νμμ΄ ννν  μ μλ μ΅μκ°κ³Ό μ΅λκ°μ μΆλ ₯νλ€. (μ΄λ, λμλ¬Έμλ₯Ό κ΅¬λΆ X)
    2. μ κ³Όμ μ λ°λ³΅μ μΌλ‘ μνλλ€.
    3. βquitβ λ¬Έμμ΄μ΄ μλ ₯λλ©΄ λ°λ³΅λ¬Έμ μ’λ£λλ€.
    4. λ°λ³΅λ¬Έμ΄ μ’λ£λλ©΄ κ° νμ λ³λ‘ μ€μ λ‘ μλ ₯λ νμλ₯Ό μΆλ ₯νλ€.
    
### π· μ μ½ μ‘°κ±΄
    1. C++ μΈμ΄μμ μ/μΆλ ₯ μ§μμ μν cinκ³Ό coutλ₯Ό μ¬μ©νλ€.
    2. λ¬Έμμ΄μ C++μ stringμ μ΄μ©νλ€.
    3. numeric_limits<T>λ₯Ό μ΄μ©νλ€.

# π 3
> Typeμ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1) new, delete ``` <br>

### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](3/img.png)

    μ μλ₯Ό μλ ₯ λ°κ³ , ν©κ³, νκ· μ κ³μ°νλ νλ‘κ·Έλ¨μ΄λ€.
    1. μ΅λ μλ ₯ κ°λ₯ν μ μμ κ°μλ₯Ό μλ ₯ λ°λλ€.
    2. βaddβ λͺλ ΉμΌλ‘ μ μλ₯Ό μλ ₯νλ€.
    3. βsumβ λͺλ ΉμΌλ‘ ν©κ³λ₯Ό μΆλ ₯νλ€. 
    4. βaverageβ λͺλ ΉμΌλ‘ νκ· μ μΆλ ₯νλ€. (λ¨ μλ ₯λ μ μκ° μλ κ²½μ°μλ β1κ° μ΄μμ μ μκ° μλ ₯λμ΄μΌ νλ€βλ₯Ό μΆλ ₯νλ€.)
    5. βlistβ λͺλ ΉμΌλ‘ μλ ₯ μμλλ‘ μ μλ₯Ό μΆλ ₯νλ€.
    6. βquitβ λͺλ ΉμΌλ‘ νλ‘κ·Έλ¨μ μ’λ£μν¨λ€.


### π· μ μ½ μ‘°κ±΄
    1. newμ deleteλ₯Ό μ΄μ©ν΄μ μ μλ€μ μ μ₯ν  λ©λͺ¨λ¦¬λ₯Ό ν λΉνλ€.
    2. βaddβ, βsumβ, βaverageβ, βquitβμ λμλ¬Έμλ₯Ό κ΅¬λΆνμ§ μλλ€.
    3. μ μλ 0λΆν° 100μ¬μ΄μ μ μμ΄λ€. λ§μ½ μ΄ λ²μλ₯Ό λ²μ΄λλ©΄ βScore should be between 0 and 100οΌλ₯Ό μΆλ ₯νλ€.
    4. μ§μ ν κ°μ μ΄κ³Όμ μ μκ° μλ ₯λλ©΄  βToo many scoresβλ₯Ό μΆλ ₯νλ€.


# π 4
> Type, control structure, function μ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1) struct``` <br>
``` (2) vector, iterator``` <br>

### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](4/img.png)

    1. μ΅λ μλ ₯ κ°λ₯ν μ¬λ μλ₯Ό μλ ₯ λ°λλ€.
    2. μ΄λ¦, κ΅­μ΄, μμ΄, μν μ±μ μ μλ ₯νλ€.
    3. μλ ₯ λ°μ μ¬λ μλ§νΌ λ€ μλ ₯μ΄ λκ³  λλ©΄, total μμΌλ‘ μΆλ ₯νλ€. 
    4. μ΄ λ, κ° μ¬λμ total κ°κ³Ό νκ·  κ°μ λͺ¨λ μΆλ ₯νλ€. 


### π· μ μ½ μ‘°κ±΄
<details>
<summary>  vector&lt;StudentInfo&gt;  </summary>
<div markdown="1">

``` cpp
// vector<StudentInfo> μ°Έκ³ .
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


    1. vector<StudentInfo> λ₯Ό μ¬μ©νλ€.
    2. StudentInfoλ₯Ό μΆλ ₯νλ ν¨μλ₯Ό μ μνλ€. 
    3. vector<StudentInfo>λ₯Ό μΆλ ₯νλ ν¨μλ₯Ό μ μνλ€.
    4. iteratorλ₯Ό μ¬μ©νλ€. 


# π 5
>  ν¨μ μ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1) enum,struct ``` <br>
``` (2) function call``` <br>
``` (3) const parameter``` <br>
``` (4) Call by reference``` <br>
``` (5) const_iterator``` <br>
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](5/img.png)

    1. ADDλ₯Ό μ¬μ©νμ¬ μ§μ¬κ°νμ κ°λ‘μ μΈλ‘λ₯Ό μλ ₯λ°λλ€.
    2. PRINTλ₯Ό μλ ₯νλ©΄ λͺ¨λ  μ§μ¬κ°νλ€μ μΆλ ₯νλ€.
    3. SORTλ₯Ό μλ ₯νλ©΄ μ§μ¬κ°νμ λμ΄ μμΌλ‘ μΆλ ₯νλ€.
    4. CLEARλ₯Ό μλ ₯νλ©΄ μ§μ¬κ°νλ€μ΄ λͺ¨λ μ­μ λλ€.
    5. EXITμ μλ ₯νλ©΄ νλ‘κ·Έλ¨μ΄ μ’λ£λλ€.

### π· μ μ½ μ‘°κ±΄

<details>
<summary>  Rectangle κ΅¬μ‘°μ²΄  </summary>
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

    1. Rectangle κ΅¬μ‘°μ²΄μ CommandKind enumμ μ¬μ©νλ€. 


# π 6
>  ν¨μ μ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1) enum,struct ``` <br>
``` (2) function call``` <br>
``` (3) const parameter``` <br>
``` (4) Call by reference``` <br>
``` (5) const_iterator``` <br>
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](6/img.png)

    1. School ν΄λμ€ μμ addStudent(νμ) ν¨μλ‘ νμμ μΆκ°ν©λλ€. 
    2. School ν΄λμ€ μμ print() ν¨μλ‘ νμμ μΆλ ₯νκ³ , 
    3. School ν΄λμ€ μμ sort() ν¨μλ‘ μ μλ³λ‘ νμμ μΆλ ₯ν©λλ€. 
    4. School ν΄λμ€ μμ findStudentWithName(μ΄λ¦) ν¨μλ‘ νμμ μ°Ύμ λ¦¬ν΄ν©λλ€. 
    4. Student ν΄λμ€ μμ setGPA(μ μ) ν¨μλ‘ νμμ μ μλ₯Ό λ£μ΅λλ€. 
    5. Student ν΄λμ€ μμ setName(μ΄λ¦) ν¨μλ‘ νμμ μ΄λ¦μ λ£μ΅λλ€. 


### π· μ μ½ μ‘°κ±΄

<details>
<summary>  Student ν΄λμ€μ School ν΄λμ€  </summary>
<div markdown="1">

``` cpp
class Student {
private:
	string name ;
	float gpa ;

public:
	β¦
} ;

class School {
private:
	string schoolName ;
	vector<Student> students ;

public:
	β¦
} ;

``` 

</div>
</details>


    1. Studentμ School ν΄λμ€λ₯Ό μ μνλ€. 


# π 7
>  ν΄λμ€ μ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1) class constructor & destructor ``` <br>
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](7/img.png) 
    
    1.  MyString ν΄λμ€μ μμ±μμ μλ©Έμλ₯Ό ν΅ν΄ κ΅¬νν©λλ€. 
    2.  MyString ν΄λμ€μ isEqual(λ¬Έμμ΄) ν¨μλ ν΄λΉ λ¬Έμμ΄μ΄ κ°μμ§ νλ¨ν©λλ€. 
    3.  MyString ν΄λμ€μ print() ν¨μλ λ¬Έμμ΄μ μΆλ ₯ν©λλ€.

### π· μ μ½ μ‘°κ±΄
<details>
<summary>  MyString ν΄λμ€  </summary>
<div markdown="1">

``` cpp
class MyString {
	char* str ;
	int size ;
public:
	MyString(const char* const s) β¦
} ;

``` 

</div>
</details>

    1. MyString ν΄λμ€λ₯Ό μ μνλ€. 


# π 8
>  μ€νΌλ μ΄ν° μ€λ²λ‘λ©μ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1)  operator overloading ``` <br>
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](8/img.png) 
    
    1. cin μΌλ‘ matrixλ₯Ό μλ ₯λ°μ΅λλ€.
    2. + μ°μ°μλ‘ matrix λκ°λ₯Ό λν©λλ€.
    3. * μ°μ°μλ‘ μμμ matrixλ₯Ό κ³±ν©λλ€.
    4. coutμΌλ‘ matrixλ₯Ό μΆλ ₯ν©λλ€.

### π· μ μ½ μ‘°κ±΄
<details>
<summary>  Matrix ν΄λμ€  </summary>
<div markdown="1">

``` cpp
class Matrix {
	int** values ;
	int row, column ;
public:
	β¦
} ;
``` 

</div>
</details>

    1. Matrix ν΄λμ€λ₯Ό μ μνλ€. 


# π 9
>  μμμ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1)  inheritance ``` <br>
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](9/img.png) 

    1. coutμΌλ‘ Employee λ₯Ό μΆλ ₯ν©λλ€.
    2. Manager ν΄λμ€μ addEmployee ν¨μλ‘ μ§μμ λ£μ΅λλ€.
    3. coutμΌλ‘ Manager λ₯Ό μΆλ ₯ν©λλ€. 

### π· μ μ½ μ‘°κ±΄
<details>
<summary>  EmployeeLevel enum  </summary>
<div markdown="1">

``` cpp
enum EmployeeLevel { μ¬μ, λλ¦¬, κ³Όμ₯, μ°¨μ₯, λΆμ₯} ;
``` 

</div>
</details>
<details>
<summary>  Employee ν΄λμ€μ μ΄λ₯Ό μμ λ°λ Manager ν΄λμ€  </summary>
<div markdown="1">

``` cpp
class Employee {
	string name ;
	const EmployeeLevel level ;
public:
	β¦
} ;

class Manager : public Employee {
  vector<Employee*> group ;
public:
  β¦
} ;

``` 

</div>
</details>

    1. enum EmployeeLevelλ₯Ό μ μνλ€. 
    2. Employee ν΄λμ€μ μ΄λ₯Ό μμ λ°λ Manager ν΄λμ€λ₯Ό μ μνλ€.
# π 10
>  Polymorphism μ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1)  Polymorphism ``` <br>
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](10/img.png)  <br>
[μμ ](10/img2.png)

    1. λνμ μ μ₯νκ³  μΆλ ₯νλ νλ‘κ·Έλ¨μλλ€.


### π· μ μ½ μ‘°κ±΄
<details>
<summary>  enum Colorμ Shape ν΄λμ€  </summary>
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

    1. enum Colorλ₯Ό μ μνλ€. 
    2. Shape ν΄λμ€λ₯Ό μ μνλ€.

# π 11
> λ λ§μ topic λ€μ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1)  class, vector, inheritance``` <br>
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](11/img.png) 

    1. ItemList μ CPU λͺκ³Ό μ λ³΄λ€μ λ£μ μ μμ΅λλ€.
    2. ItemList ν΄λμ€μ addItem ν¨μλ‘ CPU μ λ³΄λ₯Ό λ£μ΅λλ€.
    3. ItemList ν΄λμ€μ removeItem ν¨μλ‘ CPU μ λ³΄λ₯Ό μ­μ ν©λλ€. 
    4. ItemList ν΄λμ€μ print() ν¨μλ‘ CPU μ λ³΄λ₯Ό μΆλ ₯ν©λλ€.


# π 12
> Template class μ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1) Template class ``` <br>
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](12/img.png) 

    1. Listν΄λμ€μ addν¨μλ μμλ₯Ό μΆκ°ν©λλ€.
    2. Listν΄λμ€μ find(λ¬Έμμ΄)ν¨μλ λ¬Έμμ΄μ΄ μΌμΉνλ©΄ trueλ₯Ό λΆμΌμΉνλ©΄ falseλ₯Ό λ¦¬ν΄ν©λλ€.  

# π 13
>  Exception Handling μ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1)  Exception Handling ``` <br>
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](13/img.png) 

    1. StackExceptionμ λν νλ‘κ·Έλλ°μ ν©λλ€. 
    2. destructor, copy constructor, assignment operatorλ₯Ό κ΅¬νν©λλ€.
    3. μ€νμ pop(), push(), print()λ₯Ό κ΅¬νν©λλ€.

# π 14
>  namespace μ λν΄ λ°°μ°κ³ , κ·Έμ λν μ€μ΅μ μ§νν©λλ€. 
### π· ν€μλ 
``` (1) namespace ``` <br>
### π· νλ‘κ·Έλ¨ λ΄μ©
[μ€ν μμ](14/img.png) 
    
    1. μ§μ¬κ°ν, μμ μλ ₯ λ°κ³  μΆλ ₯ν©λλ€. 
    2. addElement ν¨μλ‘ λνμ μΆκ°ν©λλ€.
    3. getElement ν¨μλ‘ λνμ μΆλ ₯ν©λλ€.
    4. removeElement ν¨μλ‘ λνμ μ­μ ν©λλ€. 

