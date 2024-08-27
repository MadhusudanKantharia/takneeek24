PROBLEM GOLD COINS 101:-
i declared 5 variables namely A,B,X,Y,chef,took the inputs of corrosponding values and then used basic if else to determine if chef or chifina won and assgined chef the no. of gold coins accordingly(A or B) and then printed the no. of coins chef has.

PROBLEM INDEPENDENCE DAY 101:-
I declared 4 variables namely a,b,c,n where a,b,c represent the no. of flags of a certain colour and n is the no. of test cases ran.
Logic:I thinked firstly for two colours that what should be the possible cases in whivh no strips of same colours are together,which i cam to the conclusion that at most they can have a difference of 1 ,usig the same analogy i cam to the coclusion that if there exist a colour which has larger no. of strips then it cannot be greater than (sum of the other two colour strips)+1
therefore
a>b+c+1
b>a+c+1
c>b+a+1
directly imply not possible
hence then i used basic if-else and scanf to solve the overall problem.

PROBLEM TRUTH TELLER AND LIARS 101:-
I declared 3 int variables namely total,N,M ,where total is the no. of test cases ran and N,M are the no. of people who tel the truth and the no. of people that may lie respectively
Logic:In the case of N<=M we cannot tell which way is right due the fact that all M people may lie and we won't find a way so there is no guarantee,therefore N>M for us to find a way.Then if we consider that all M people lie(worst case scenario) we need more people than them to tell the truth hence,we need to select atleat 2M+1 people to be sure of the way.
Therefore using for-loop,scanf,and basic if-else i printed the output.

