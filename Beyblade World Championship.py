def main():

 n = int(input()) 				#for taking number of test cases
 for i in range(n):				#for loop for each test case
    k=0						#stores total win count in each test case
    m = int(input())				#number of members each team can have
    pow_g = list(map(int,input().split()))	#list stores space separated powers of Team-G Revolution players
    pow_o = list(map(int,input().split())) 	#list stores space separated powers of opposite team
    pow_g.sort(reverse=True)			#sort team-G Revolution powers in reverse order
    pow_o.sort(reverse=True)			#sort opposite teams power in reverse order
    c = 0					
    for i in range(m):				#outer for loop to compare powers
        for j in range(c,m):			#inner for loop to compare powers
            if pow_g[i] > pow_o[j]:		#compare powers of current members both teams
                c = j + 1			
                k+=1				#increase win count by 1
                break				#break loop
    print(k)					#print max possible wins of team-G Revolution for each test case 

main()