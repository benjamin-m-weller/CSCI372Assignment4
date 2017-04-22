parent(lori, ben).
parent(brian, ben).
parent(lori, andrew).
parent(brian, andrew).
parent(brian, lauren).
parent(lori, lauren).

male(ben).
male(andrew).
male(brian).
female(lori).
female(lauren).

mother(X, Y) :- female(X), parent(X, Y).

/**
* I'm going to check that both parents are the same for both of them, 
* check to see if x is female, and then check to see that x!=y
*/

sister(X, Y) :- female(X), parent(A, X), parent(B, X), parent(A, Y), parent(B, Y), X\=Y.