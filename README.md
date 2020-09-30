# Sastantua


## Our battle will be legendary!

After a year spent training amongst the best,
I trace my steps back to the source...
Here, an old enemy will be laid to rest,
Once fate has taken its course

It all ends where it began! En garde, Sastantua!

---
### The two pyramids:

	Unlike most people during the piscine, my attempt to code Sastantua was very short.
	After about an hour thinking about the problem, me and my partner decided that it would be easier to reverse engineer it from the provided executable.
	It goes without saying that it was not actually easier and that we did not succeed. All we were able to do was recover some of the comments and waste the remainder of the day looking through assembly guides...

	And thus this is my first (and last hopefully) true attempt at coding Sastantua.
	I will also attempt to reverse engineer it, so that I may become the one true master of the Pyramid

### Cstantua :

	Just the regular Sastantua in C, nothing impressive.
	Coding it to norme for the complete piscine experience.

	Norme:
	```
	5 functions per file
	25 lines per function
	Not stdlib functions allowed except those in the pdf (unistd's write())
	```

	Additionally, the pdf specifies that there should be only one file. Meaning 100 lines of code.

	Here's what I have so far:

	![alt text][sas]

	I only need to make the door and door knob, but this VM is painfully slow...
	All in all it was easier than expected. I have a better understanding of patterns than I did then.
	I remember trying to find the length of the base, in what seemed like an impossible task. But the solution came to me after a literal 2 minutes of looking at the program output.
	Improvment!!! :)

	I may even do a color gradient Sastantua to celebrate >.>

	```
	Compile with:
		Make [Cstantua , Cstantua_rev]
	Run:
		./ASMstantua [num]
		./ASMstantua_rev [num]
	```


### ASMstantua :

	The true challenge begins...
	```
	Compile with:
		Make [ASMstantua , ASMstantua_rev]
	Run:
		./ASMstantua [num]
		./ASMstantua_rev [num]
	```

[sas]:https://imgur.com/a/I0KmLkw
