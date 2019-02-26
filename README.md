# prog4-mortgage-01-kalkedan
prog4-mortgage-01-kalkedan created by GitHub Classroom

Issues:  
1) monthly payment is a temporary value that's relevant only to getPayment(); you shouldn't have a monthlyPayment variable in your member data  
2) Because of (1), you have a bug. If the user of your class doesn't call getPayment() before they call getTotalPayments(), then getTotalPayments will return garbage.  
   They should be able to call either of those functions; they shouldn't have to know to call them in a particular order  
   
   Grade: 21/25
