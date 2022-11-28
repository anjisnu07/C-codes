# You can use an array to represent a binary tree. There are various ways to do it and implementation can vary.

# However it is not recommended because of many reasons, some of which are:

:anger: Arrays are fixed size data structure. If array is full and you want to insert one more element you will need to create a new array of larger size and copy previous array. It is a lot of overhead.<br />
:anger: If you create a very large array in advance you will waste memory.<br />
:anger: For a sparse tree most of array positions will be wasted.<br />
