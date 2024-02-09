#Mikaela-Rose Porter

"""
This program computes a final grade using 3 homeworks, 2 labs, and a test.
Algorithm:
1. Ask the user for their 3 homework grades. HW1; HW2; HW3
2. Ask the user for their 2 lab grades. Lab1; Lab22
3. Ask the user for their exam grade. Exam.
4. HWK_avg = (HW1 + HW2 + HW3) / 3
5. Lab_avg = (Lab1 + Lab2) / 2
6. Formula for points is Homework * .50 + Lab * .20 + Exam * .30
7. Compute the points for each category
8. Output the points for each category
9. Compute the total point (HW + Lab + Test)
10. Output the result
"""

HW1 = float(input("Enter your first homework grade: "))
HW2 = float(input("Enter your second homework grade: "))
HW3 = float(input("Enter your third homework grade: "))

Lab1 = float(input("Enter your first lab grade: "))
Lab2 = float(input("Enter your second lab grade: "))

Exam = float(input("Enter your exam grade: "))

#compute the averages for homework and labs
HWK_avg = (HW1 + HW2 + HW3) / 3
Lab_avg = (Lab1 + Lab2) / 2
HWK_Points = HWK_avg * 0.50
Lab_Points = Lab_avg * 0.20

#compute the exam points
Exam_Points = Exam * 0.30
TotalGrade = HWK_Points + Lab_Points + Exam_Points

#output each category of points and the total grade.
print("Homework points are %0.2f" %(HWK_Points)) #using % formatting 0.2f
print("Lab points are %0.2f" %(Lab_Points))
print("Exam points are %0.2f" %(Exam_Points))

#output the final grade with a label
print(f"The final average is {TotalGrade:.2f}") #example of a f string
