let text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
let length = text.length;


// console.log(length)
// console.log(text.charAt(0))
// console.log(text[0])
// text[0]='C'
// console.log(text)

let text1 = "Hello";
let text2 = "World";
let text3 = text1.concat("...", text2);
// console.log(text3)

/**
 * Note
All string methods return a new string. They don't modify the original string.

Formally said:

Strings are immutable: Strings cannot be changed, only replaced.
 */


/***
 * Extracting String Parts
There are 3 methods for extracting a part of a string:

slice(start, end)
substring(start, end)
substr(start, length)
 */

text = "Apple, Banana, Kiwi";
let part = text.slice(7, 14);
// console.log(part)

// Note
// JavaScript counts positions from zero.

// First position is 0.

// Second position is 1.
part = text.slice(7)
console.log(part)