parent(lori, ben).
parent(brian, ben).
parent(lori, andrew).
parent(brian, andrew).
male(ben).
male(andrew).
male(brian).
female(lori).
mother(X, Y) :- female(X), parent(X, Y).