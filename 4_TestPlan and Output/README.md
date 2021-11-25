# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**     | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|---------------------|------------|-------------|----------------|------------------|
|  H_01       | To Purchace Ticket  | 3 | Display the list of movie | Display the list of movies |Requirement based |
|  H_02       | Select seat choice | Perfered seat|Seat is Selected|Already booked| Scenario based    |
|  H_03       | Name of the customer|  name |name |name | Requirement based  |
|  H_04       | selecting movie | Movie name | selected movie | movie is selected | Boundary based |

## Table no: Low level test plan

| **Test ID** | **Description**   | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|------------------|------------|-------------|----------------|------------------|
|  L_01       | Movie price  |  1 Ticket |200 |200 |Requirement based |
|  L_02       | admin access to edit price  |  enter password |new price|Success |Scenario based    |
|  L_03       | cancel the ticket |  enter movie id |canceled |Success |Boundary based    |
