#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, pizza, q, z1, f, cdq, tbill, cd, cost, cost1, ao, zinger, b, beef, biryani, re, tbill2, ttbill, z2, z3, remove, okok, qaa;
    int cd1=70;
    printf("====================================================================================\n");
    printf("+======+======+======+======+ Welcome to  Cafe Tonight +======+======+======+======+\n");
    printf("====================================================================================\n");
	printf("Please enter what you would like to eat \n");
    printf("1)Pizza = 350 Rs                 2)Zinger = 250 Rs \n");
    printf("3)Beef Burger = 280 Rs           4)Chicken Biryani = 130 Rs  \n");
    printf("5)Chai/Tea                       6)Parathas  \n");
    printf("(PS: If you want to order items with diffrent sides/flavours please order items again)\n");
    scanf("%d", &a);
    switch (a) {
        case 1:
    pizza = 350;
    printf("Enter Quanity:- \n");
    scanf("%d", &q);
    z1 = q * pizza;
    printf("Please enter flavour of choice:- \n");
    printf("1)Chicken Tikka          2)Chicken fajita \n");
    printf("3)Cheese Lovers          4)Malai Boti \n");
    scanf("%d", &f);
    if (f==1) {
    printf("You have ordered %d X chicken tikka pizza\n", q);}
    else if (f==2) {
      printf("You have ordered %d X chicken fajita pizza\n", q);}
    else if (f==3){
         printf("You have ordered %d X cheese lovers pizza\n", q);}
         else if (f==4){
             printf("You have ordered %d X malai boti pizza\n", q);}
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            printf("Enter choice of drink if any:  \n ");
            printf("1)Coke      2)7up        3)None\n");
            scanf("%d", &cd);
            if (cd < 3) {
            	 printf("Enter amount of drinks: \n");
            scanf("%d", &cdq);
            if (cd==1) {
            	printf("You have added %d coke \n", cdq);}
            	else if (cd==2){
            	printf("You have added %d 7up \n", cdq);}
            	else {
            	printf("Invalid choice, Please order again :)");
			return 0;}
            tbill = (cd1 * cdq) + (z1);
            printf("Your total bill is %d, please pay at the counter\n", tbill) ;}
            else {
                printf("Your total bill is %d, please pay at the counter :)\n", z1);}
                            printf("-------------------------------------------------------------------------------\n");
        break; }
        switch (a) {
		case 2:
         zinger = 250;
    printf("Enter Quantity: \n");
    scanf("%d", &q);
    z1 = q * zinger;
    printf("Please enter any sides if wanted:- \n");
    printf("1)Regular Fries = 60 Rs       2)Sweet Potato Fries = 90 Rs      3)None\n");
    scanf("%d", &b);
    if (b==1) {
    printf("You have ordered %d X Zinger Burger with regular fries.\n", q);
    cost = z1 + (60 * q);}
    else if (b==2) {
      printf("You have ordered %d X Zinger Burger with sweet potato fries.\n", q);
      cost = z1 + (90 * q); }
    else if (b==3){
         printf("You have ordered %d X Zinger Burger with no sides\n", q);
         cost = z1; }
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            printf("Would you like any add ons? \n");
            printf("1)Extra Cheese = 30 Rs     2)Extra Patty = 150 Rs       3)None  \n");
            scanf("%d", &ao);
            if (ao==1){
            	printf("You have added extra cheese \n");
				cost1 = cost + (30 * q);}
			else if (ao==2){
            	printf("You have added extra patty \n");
				cost1 = cost + (150 * q);}
			else if (ao==3){
            	printf("You have not added anything \n");
				cost1 = cost;}
			else {
				printf("Invalid choice, please order again :)");
				return 0;}
            printf("Enter choice of drink if any:  \n ");
            printf("1)Coke      2)7up        3)None\n");
            scanf("%d", &cd);
            if (cd < 3) {
            	 printf("Enter amount of drinks: \n");
            scanf("%d", &cdq);
                if (cd==1) {
            	printf("You have added %d coke \n", cdq);}
            	else if (cd==2){
            	printf("You have added %d 7up \n", cdq);}
            	else {
				printf("Invalid choice, please order again :)");
				return 0;}
            tbill = (cd1 * cdq) + (cost1);
            printf("Your total bill is %d, please pay at the counter\n", tbill) ;}
            else {
                printf("Your total bill is %d, please pay at the counter :)\n", z1);}
            printf("-------------------------------------------------------------------------------\n");
        break; }
        switch (a) {
		case 3:
         beef = 280;
    printf("Enter Quantity: \n");
    scanf("%d", &q);
    z1 = q * beef;
    printf("Please enter any sides if wanted; \n");
    printf("1)Regular Fries = 60 Rs      2)Sweet Potato Fries = 90 Rs       3)None \n");
    scanf("%d", &b);
    if (b==1) {
    printf("You have ordered %d X Beef Burger with regular fries.\n", q);
    cost = z1 + (60 * q);}
    else if (b==2) {
      printf("You have ordered %d X Beef Burger with sweet potatoe fries.\n", q);
      cost = z1 + (90 * q); }
    else if (b==3){
         printf("You have ordered %d X Beef Burger with no sides\n", q);
         cost = z1; }
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            printf("Would you like any add ons? \n");
            printf("1)Extra Cheese = 30 Rs     2)Extra Patty = 180 Rs       3)None  \n");
            scanf("%d", &ao);
            if (ao==1){
            	printf("You have added extra cheese \n");
				cost1 = cost + (30 * q);}
			else if (ao==2){
            	printf("You have added extra patty \n");
				cost1 = cost + (180 * q);}
			else if (ao==3){
            	printf("You have not added anything \n");
				cost1 = cost;}
			else {
				printf("Invalid choice, please order again :)");
				return 0;}
            printf("Enter choice of drink if any:  \n ");
            printf("1)Coke      2)7up        3)None\n");
            scanf("%d", &cd);
            if (cd < 3) {
            	 printf("Enter amount of drinks: \n");
            scanf("%d", &cdq);
                if (cd==1) {
            	printf("You have added %d coke \n", cdq);}
            	else if (cd==2){
            	printf("You have added %d 7up \n", cdq);}
            	else {
				printf("Invalid choice, please order again :)");
				return 0;}
            tbill = (cd1 * cdq) + (cost1);
            printf("Your total bill is %d, please pay at the counter\n", tbill) ;}
            else {
                printf("Your total bill is %d, please pay at the counter :)\n", z1);}
                    printf("-------------------------------------------------------------------------------\n");
                            break ;}
                 switch (a) {
		case 4:
         biryani = 130;
    printf("Enter Quantity: \n");
    scanf("%d", &q);
    z1 = q * biryani;
    printf("Please enter any sides if wanted; \n");
    printf("1)Raita = 30 Rs          2)Salad = 20 Rs         3)None \n");
    scanf("%d", &b);
    if (b==1) {
    printf("You have ordered %d X Chicken Biryani with raita.\n", q);
    cost = z1 + (30 * q);}
    else if (b==2) {
      printf("You have ordered %d X Chicken Biryani with salad.\n", q);
      cost = z1 + (20 * q); }
    else if (b==3){
         printf("You have ordered %d X Chicken Biryani with no sides\n", q);
         cost = z1; }
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            printf("Would you like any add ons? \n");
            printf("1)Extra Chicken Piece = 60 Rs     2)Extra Potato = 30 Rs       3)None  \n");
            scanf("%d", &ao);
            if (ao==1){
            	printf("You have added extra chicken piece \n");
				cost1 = cost + (60 * q);}
			else if (ao==2){
            	printf("You have added extra potato piece \n");
				cost1 = cost + (30 * q);}
			else if (ao==3){
            	printf("You have not added anything \n");
				cost1 = cost;}
			else {
				printf("Invalid choice, please order again :)");
				return 0;}
            printf("Enter choice of drink if any:  \n ");
            printf("1)Coke      2)7up        3)None\n");
            scanf("%d", &cd);
            if (cd < 3) {
            	 printf("Enter amount of drinks: \n");
            scanf("%d", &cdq);
                if (cd==1) {
            	printf("You have added %d coke \n", cdq);}
            	else if (cd==2){
            	printf("You have added %d 7up \n", cdq);}
            	else {
				printf("Invalid choice, please order again :)");
				return 0;}
            tbill = (cd1 * cdq) + (cost1);
            printf("Your total bill is %d, please pay at the counter\n", tbill) ;}
            else {
                printf("Your total bill is %d, please pay at the counter :)\n", z1);}
        printf("-------------------------------------------------------------------------------\n");
                            break ;}
          switch (a) {
          	case 5 :
     printf("Please enter Chai of choice; \n");
    printf("1)Saadi Chai = 50 Rs          2)Doodh Patti chai = 70 Rs              3)Cut Chai = 30 Rs \n");
    scanf("%d", &f);
    printf("Enter Quanity: \n");
    scanf("%d", &q);
    if (f==1) {
    printf("You have ordered %d X Saadi Chai\n", q);
	     z1 = 50; }
    else if (f==2) {
      printf("You have ordered %d X Doodh Patti Chai\n", q);
	  z1 = 70;}
    else if (f==3){
         printf("You have ordered %d X Cut Chai \n", q);
		 z1 = 30;}
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            tbill = (z1 * q);
            printf("Your total bill is %d, please pay at the counter :)\n", tbill) ;}
                        printf("-------------------------------------------------------------------------------\n");
                switch (a) {
        case 6:
     printf("Please enter paratha of choice; \n");
    printf("1)Saada Paratha = 30 Rs          2)Chicken paratha = 80 Rs \n");
    printf("3)Cheese Paratha = 70 Rs         4)Aloo Paratha = 60 Rs \n");
    scanf("%d", &f);
    printf("Enter Quantity: \n");
    scanf("%d", &q);
    if (f==1) {
    printf("You have ordered %d X saada paratha pizza\n", q);
	     z1 = 30; }
    else if (f==2) {
      printf("You have ordered %d X chicken paratha pizza\n", q);
	  z1 = 80;}
    else if (f==3){
         printf("You have ordered %d X cheese paratha pizza\n", q);
		 z1 = 70;}
         else if (f==4){
             printf("You have ordered %d X aloo paratha pizza\n", q);
			 z1 = 60;}
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            tbill = (z1 * q);
            printf("Your total bill is %d, please pay at the counter :)\n", tbill) ;
            printf("-------------------------------------------------------------------------------\n");
        break; }
        printf("Would you like to remove any item?\n");
          printf("1)Yes                  2)No     \n");
        scanf("%d", &remove);
        if (remove == 1){
                printf("What would you like to remove?\n");
    printf("1)Pizza = 350 Rs                 2)Zinger = 250 Rs \n");
    printf("3)Beef Burger = 280 Rs           4)Chicken Biryani = 130 Rs  \n");
    printf("5)Chai/Tea                       6)Parhatas  \n");
        scanf("%d", &okok);
                if ( a != okok){
        printf("Your order doesn't have this item"); }
        if ( a == okok ) {
                printf("What quantity would you like to remove?\n");
                scanf("%d", &qaa); }
                if ( a == 1 ) {
            tbill = tbill - ( pizza * qaa); }
           if ( a == 2 ) {
                if (cd == 3 ) {
            tbill = z1 - ( zinger * qaa); }
              else if ( cd < 3){
            tbill = tbill - (  zinger * qaa); } }
             if ( a == 3) {
                if (cd == 3 ) {
            tbill = z1 - ( beef * qaa); }
              else if ( cd < 3){
            tbill = tbill - (  beef * qaa); } }
                 if ( a == 4) {
                if (cd == 3 ) {
            tbill = z1 - ( biryani * qaa); }
              else if ( cd < 3){
            tbill = tbill - (  biryani * qaa); } }
                 if ( a == 5) {
                if (f == 3 ) {
            tbill = z1 - ( 30 * qaa); }
              else if ( f == 2){
            tbill = tbill - (  70 * qaa); }
            else if ( f == 1){
            tbill = tbill - (  50 * qaa); } }
               if ( a == 6) {
                if (f == 3 ) {
            tbill = z1 - ( 70 * qaa); }
              else if ( f == 2){
            tbill = tbill - (  80 * qaa); }
            else if ( f == 1){
            tbill = tbill - (  30 * qaa); }
             else if ( f == 4){
            tbill = tbill - (  60 * qaa); } }
        } else if (remove >= 1) { return 0;}

          printf("Your total bill after removal is %d\n Please pay at the counter :)", tbill);
        printf("--------------------------------------------------------------------------\n");
       printf("Would you like to add any other items to your order?\n");
        printf("1)Yes                  2)No     \n");
        scanf("%d", &re);
                if (re <= 2) {
        	   int a, pizza, q, z2, f, cdq, tbill2, cd, cost, cost1, ao, zinger, b, beef, biryani;
    int cd1=70;
    printf("====================================================================================\n");
    printf("+======+======+======+======+ Welcome to  Cafe Tonight +======+======+======+======+\n");
    printf("====================================================================================\n");
	printf("Please enter what you would like to add to the order \n");
    printf("1)Pizza = 350 Rs                 2)Zinger = 250 Rs \n");
    printf("3)Beef Burger = 280 Rs           4)Chicken Biryani = 130 Rs  \n");
    printf("5)Chai/Tea                       6)Parathas  \n");
	 printf("(PS: If you want to order itmes with diffrent sides/flavours please order itmes again)");
    scanf("%d", &a);
    switch (a) {
        case 1:
    pizza = 350;
    printf("Enter Quantity: \n");
    scanf("%d", &q);
    z2 = q * pizza;
    printf("Please enter flavour of choice; \n");
    printf("1)Chicken Tikka          2)Chicken fajita \n");
    printf("3)Cheese Lovers          4)Malai Boti \n");
    scanf("%d", &f);
    if (f==1) {
    printf("You have ordered %d X chicken tikka pizza\n", q);}
    else if (f==2) {
      printf("You have ordered %d X chicken fajita pizza\n", q);}
    else if (f==3){
         printf("You have ordered %d X cheese lovers pizza\n", q);}
         else if (f==4){
             printf("You have ordered %d X malai boti pizza\n", q);}
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            printf("Enter choice of drink if any:  \n ");
            printf("1)Coke      2)7up        3)None\n");
            scanf("%d", &cd);
            if (cd < 3) {
            	 printf("Enter amount of drinks: \n");
            scanf("%d", &cdq);
            if (cd==1) {
            	printf("You have added %d coke \n", cdq);}
            	else if (cd==2){
            	printf("You have added %d 7up \n", cdq);}
            	else {
            	printf("Invalid choice, Please order again :)");
			return 0;}
            tbill2 = (cd1 * cdq) + (z2);
            printf("Your total bill is %d, please pay at the counter\n", tbill2) ;}
            else {
                printf("Your total bill is %d, please pay at the counter :)\n", z2);}
        break; }
        switch (a) {
		case 2:
         zinger = 250;
    printf("Enter Quantity: \n");
    scanf("%d", &q);
    z2 = q * zinger;
    printf("Please enter any sides if wanted; \n");
    printf("1)Regular Fries = 60 Rs       2)Sweet Potato Fries = 90 Rs      3)None\n");
    scanf("%d", &b);
    if (b==1) {
    printf("You have ordered %d X Zinger Burger with regular fries.\n", q);
    cost = z2 + (60 * q);}
    else if (b==2) {
      printf("You have ordered %d X Zinger Burger with sweet potato fries.\n", q);
      cost = z2 + (90 * q); }
    else if (b==3){
         printf("You have ordered %d X Zinger Burger with no sides\n", q);
         cost = z2; }
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            printf("Would you like any add ons? \n");
            printf("1)Extra Cheese = 30 Rs     2)Extra Patty = 150 Rs       3)None  \n");
            scanf("%d", &ao);
            if (ao==1){
            	printf("You have added extra cheese \n");
				cost1 = cost + (30 * q);}
			else if (ao==2){
            	printf("You have added extra patty \n");
				cost1 = cost + (150 * q);}
			else if (ao==3){
            	printf("You have not added anything \n");
				cost1 = cost;}
			else {
				printf("Invalid choice, please order again :)");
				return 0;}
            printf("Enter choice of drink if any:  \n ");
            printf("1)Coke      2)7up        3)None\n");
            scanf("%d", &cd);
            if (cd < 3) {
            	 printf("Enter amount of drinks: \n");
            scanf("%d", &cdq);
                if (cd==1) {
            	printf("You have added %d coke \n", cdq);}
            	else if (cd==2){
            	printf("You have added %d 7up \n", cdq);}
            	else {
				printf("Invalid choice, please order again :)");
				return 0;}
            tbill2 = (cd1 * cdq) + (cost1);
            printf("Your total bill is %d, please pay at the counter\n", tbill2) ;}
            else {
                printf("Your total bill is %d, please pay at the counter :)\n", z2);}

        break; }
        switch (a) {
		case 3:
         beef = 280;
    printf("Enter Quantity: \n");
    scanf("%d", &q);
    z2 = q * beef;
    printf("Please enter any sides if wanted; \n");
    printf("1)Regular Fries = 60 Rs      2)Sweet Potato Fries = 90 Rs       3)None \n");
    scanf("%d", &b);
    if (b==1) {
    printf("You have ordered %d X Beef Burger with regular fries.\n", q);
    cost = z2 + (60 * q);}
    else if (b==2) {
      printf("You have ordered %d X Beef Burger with sweet potato fries.\n", q);
      cost = z2 + (90 * q); }
    else if (b==3){
         printf("You have ordered %d X Beef Burger with no sides\n", q);
         cost = z2; }
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            printf("Would you like any add ons? \n");
            printf("1)Extra Cheese = 30 Rs     2)Extra Patty = 180 Rs       3)None  \n");
            scanf("%d", &ao);
            if (ao==1){
            	printf("You have added extra cheese \n");
				cost1 = cost + (30 * q);}
			else if (ao==2){
            	printf("You have added extra patty \n");
				cost1 = cost + (180 * q);}
			else if (ao==3){
            	printf("You have not added anything \n");
				cost1 = cost;}
			else {
				printf("Invalid choice, please order again :)");
				return 0;}
            printf("Enter choice of drink if any:  \n ");
            printf("1)Coke      2)7up        3)None\n");
            scanf("%d", &cd);
            if (cd < 3) {
            	 printf("Enter amount of drinks: \n");
            scanf("%d", &cdq);
                if (cd==1) {
            	printf("You have added %d coke \n", cdq);}
            	else if (cd==2){
            	printf("You have added %d 7up \n", cdq);}
            	else {
				printf("Invalid choice, please order again :)");
				return 0;}
            tbill2 = (cd1 * cdq) + (cost1);
            printf("Your total bill is %d, please pay at the counter", tbill2) ;}
            else {
                printf("Your total bill is %d, please pay at the counter :)", z2);}
                break ;}
                 switch (a) {
		case 4:
         biryani = 130;
    printf("Enter Quantity: \n");
    scanf("%d", &q);
    z2 = q * biryani;
    printf("Please enter any sides if wanted; \n");
    printf("1)Raita = 30 Rs          2)Salad = 20 Rs         3)None \n");
    scanf("%d", &b);
    if (b==1) {
    printf("You have ordered %d X Chicken Biryani with raita.\n", q);
    cost = z2 + (30 * q);}
    else if (b==2) {
      printf("You have ordered %d X Chicken Biryani with salad.\n", q);
      cost = z2 + (20 * q); }
    else if (b==3){
         printf("You have ordered %d X Chicken Biryani with no sides\n", q);
         cost = z2; }
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            printf("Would you like any add ons? \n");
            printf("1)Extra Chicken Piece = 60 Rs     2)Extra Potato = 30 Rs       3)None  \n");
            scanf("%d", &ao);
            if (ao==1){
            	printf("You have added extra chicken piece \n");
				cost1 = cost + (60 * q);}
			else if (ao==2){
            	printf("You have added extra potato piece \n");
				cost1 = cost + (30 * q);}
			else if (ao==3){
            	printf("You have not added anything \n");
				cost1 = cost;}
			else {
				printf("Invalid choice, please order again :)");
				return 0;}
            printf("Enter choice of drink if any:  \n ");
            printf("1)Coke      2)7up        3)None\n");
            scanf("%d", &cd);
            if (cd < 3) {
            	 printf("Enter amount of drinks: \n");
            scanf("%d", &cdq);
                if (cd==1) {
            	printf("You have added %d coke \n", cdq);}
            	else if (cd==2){
            	printf("You have added %d 7up \n", cdq);}
            	else {
				printf("Invalid choice, please order again :)");
				return 0;}
            tbill2 = (cd1 * cdq) + (cost1);
            printf("Your total bill is %d, please pay at the counter", tbill2) ;}
            else {
                printf("Your total bill is %d, please pay at the counter :)", z2);}
                break ;}
          switch (a) {
          	case 5 :
     printf("Please enter Chai of choice; \n");
    printf("1)Saadi Chai = 50 Rs          2)Doodh Patti chai = 70 Rs              3)Cut Chai = 30 Rs \n");
    scanf("%d", &f);
    printf("Enter Quantity: \n");
    scanf("%d", &q);
    if (f==1) {
    printf("You have ordered %d X Saadi Chai\n", q);
	     z2 = 50; }
    else if (f==2) {
      printf("You have ordered %d X Doodh Patti Chai\n", q);
	  z2 = 70;}
    else if (f==3){
         printf("You have ordered %d X Cut Chai \n", q);
		 z2 = 30;}
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            tbill2 = (z2 * q);
            printf("Your total bill is %d, please pay at the counter\n", tbill2) ;}
                switch (a) {
        case 6:
     printf("Please enter paratha of choice; \n");
    printf("1)Saada Paratha = 30 Rs          2)Chicken paratha = 80 Rs \n");
    printf("3)Cheese Paratha = 70 Rs         4)Aloo Paratha = 60 Rs \n");
    scanf("%d", &f);
    printf("Enter Quantity: \n");
    scanf("%d", &q);
    if (f==1) {
    printf("You have ordered %d X saada paratha pizza\n", q);
	     z2 = 30; }
    else if (f==2) {
      printf("You have ordered %d X chicken paratha pizza\n", q);
	  z2 = 80;}
    else if (f==3){
         printf("You have ordered %d X cheese paratha pizza\n", q);
		 z2 = 70;}
         else if (f==4){
             printf("You have ordered %d X aloo paratha pizza\n", q);
			 z2 = 60;}
       else {
            printf("Invalid choice, Please order again :)");
			return 0;}
            tbill2 = (z2 * q);
            printf("Your total bill is %d, please pay at the counter", tbill2) ;
        break; }
        ttbill = tbill + tbill2;
        z3 = z1 + z2;
        if (cd==3) {
        	ttbill = tbill + z2;
        	printf("your combine total is %d\n", ttbill);	}
        	else {
        		ttbill = z1 + z3;
        	printf("your combine total is %d\n", ttbill);	}
			}
			 printf("Would you like to remove any item?\n");
          printf("1)Yes                  2)No     \n");
        scanf("%d", &remove);
        if (remove <= 2){
                printf("What would you like to remove?\n");
    printf("1)Pizza = 350 Rs                 2)Zinger = 250 Rs \n");
    printf("3)Beef Burger = 280 Rs           4)Chicken Biryani = 130 Rs  \n");
    printf("5)Chai/Tea                       6)Parathas  \n");
        scanf("%d", &okok);
                if ( a != okok){
        printf("Your order doesn't have this item"); }
        if ( a == okok ) {
                printf("What quantity would you like to remove?\n");
                scanf("%d", &qaa); }
                if ( a == 1 ) {
            tbill2 = tbill2 - ( pizza * qaa); }
           if ( a == 2 ) {
                if (cd == 3 ) {
            tbill2 = z2 - ( zinger * qaa); }
              else if ( cd < 3){
            tbill2 = tbill2 - (  zinger * qaa); } }
             if ( a == 3) {
                if (cd == 3 ) {
            tbill2 = z2 - ( beef * qaa); }
              else if ( cd < 3){
            tbill2 = tbill2 - (  beef * qaa); } }
                 if ( a == 4) {
                if (cd == 3 ) {
            tbill2 = z2 - ( biryani * qaa); }
              else if ( cd < 3){
            tbill2 = tbill2 - (  biryani * qaa); } }
                 if ( a == 5) {
                if (f == 3 ) {
            tbill2 = z2 - ( 30 * qaa); }
              else if ( f == 2){
            tbill2 = tbill2 - (  70 * qaa); }
            else if ( f == 1){
            tbill2 = tbill2 - (  50 * qaa); } }
               if ( a == 6) {
                if (f == 3 ) {
            tbill2 = z2 - ( 70 * qaa); }
              else if ( f == 2){
            tbill = tbill - (  80 * qaa); }
            else if ( f == 1){
            tbill2 = tbill2 - (  30 * qaa); }
             else if ( f == 4){
            tbill2 = tbill2 - (  60 * qaa); } }
        }
        printf("Your total bill after removal is %d\n Please pay at the counter :)", tbill2);
        printf("--------------------------------------------------------------------------\n");
        printf("=========================== THANKS FOR COMING ============================\n");
        return 0;
       }

