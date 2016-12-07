%Lista 08 Exercicio 06
% 1
adiciona(X,L,[X|L]).
% 2
apaga(X,[X|R],R).
apaga(X,[Y|R1],[Y|R2]):-apaga(X,R1,R2).
% 3
inverte(L,LI):-inverte1(L,[ ],LI).
inverte1([ ],L,L).
inverte1([X|L],L2,L3):- inverte1(L,[X|L2],L3).
% 4
comprimento(0,[]).
comprimento(N,[_|R]):- comprimento(N1,R),
 N is 1 + N1.
% 5
somatorio(0,[]).
somatorio(X,[Y|R]):- somatorio(S,R),
 X is S+Y.
% testar os predicados:
q1a(L):-adiciona(1,[2,3],L).
q1b(X):-adiciona(X,[2,3],[1,2,3]).
q2a(L):-apaga(a,[a,b,a,c],L).
q3(L):-inverte(L1,L2).
q5(X):-comprimento(X,[a,b,c]).
