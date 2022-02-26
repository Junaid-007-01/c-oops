/*
Keith’s Sheet Music needs a program to implement its music teacher’s discount policy.The
program prompts the user to enter the purchase total and indicate whether the purchaser is a teacher.
Music teachers receive a 10% discount on their sheet music purchases unless the purchase total is
$100 or higher. In that case, the discount is 12%. The discount calculation occurs before the
addition of the 5% sales tax. Here are two sample outputs —one for a teacher and one for a
nonteacher. Use necessary manipulators to format your output.

 (For Teacher)
Total purchases $122.00
Teacher's discount (12%) 14.64
Discounted total 107.36
Sales tax (5%) 5.37
Total $112.73
 (For Non-teacher)
Total purchases $ 24.90
Sales tax (5%) 1.25
Total $ 26.15

*/

#include <iostream>
using namespace std;

int main()
{
    int cst_type;
    float prch_total, discount, final_cost;
    cout << "Enter the total purchase amount: ";
    cin >> prch_total;
    cout << "\nPress '1' for Teacher OR '2' for Non-Teacher: ";
    cin >> cst_type;
    if (cst_type == 1)                                        // Checking wether the purchaser is Teacher or Non-Teacher 
    {
        if (prch_total >= 100)                                // For Purchase amount greater than or equal to $100
        {
            discount = prch_total * (0.12);
                                                           // Evaluating the Discount
            // Evaluating Final amount using suitable formula
            final_cost = (prch_total - discount) + ((prch_total - discount) * 0.05);
            
        }
        else                                                                           // For Purchase amount less than $100
        {   
            discount = prch_total * (0.10);                                            // Evaluating the Discount
                                                      
            // Evaluating Final amount using suitable formula
            final_cost = (prch_total - discount) + ((prch_total - discount) * 0.05);
        }
    }
    else                                                  // If the purchaser is a Non-Teacher                                    
    {
        final_cost = prch_total + (prch_total * 0.05);    // Evaluating Final amount using suitable formula
    }
    cout << "\nThe Final Amount to be paid is:$ " << final_cost; // Printing out the Final Amount
}