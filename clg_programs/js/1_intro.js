// Primitive data types in in java script
// Bolean 
// String
// Number
// Null
// Symbol we dont have a literal for symbol
console.log('Hello World');
var length= "hello".length;
var length= new String("phani kumar").length;

typeof "hello"; // this is string
typeof String("hello"); // string
typeof new String("hello"); // this gives object insted string
//typeof new String("hello").valueof(); // but value of object gives correct dataType

typeof 10; // this gives number
typeof new Number(10); // this gives object
typeof Number(10); // this is number
//typeof new Number(10).valueof(); // bojects value is number here

// var hello= "foo";
// hello.foo= "foo";
// hello.foo; // this is undefined

var num = new Number(10);
var sum = 10+ num; // here num is object but as per it will be converted to respective datatype

num.foo= "foo";
num.foo; // this is correct.. reason is here num is object

// but do not use in place primitive places.. see ex
var value= new Boolean(false);
if(value){
//	alert("foo"); 
// here foo will execute as value=true because value is ojbect it always true.
}
