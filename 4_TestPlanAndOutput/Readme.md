# TESTPLAN
## HIGH LEVEL TEST PLAN:
   | TEST ID |         DESCRIPTION               |                           EXP I/P                                  | EXP O/P   |  ACTUAL OUT | TYPE OF TEST |
   | :---    |     :---:                         |                             :---:                                   |  ---:     |         --: |          --: |    
   | H_01    | Tested login credentials          | username, password                                                 | Success   | Success     | Technical    |   
   | H_02    | Tested Booking of room            | Room number,name,address,phone no,nationality,periods,arrival date.| Success   | Success     | Technical    |  
   | H_03    | Tested view all records           | Room number                                                        | Success   | Success     | Technical    |
   | H_04    | Tested delete records             | Room number                                                        | Success   | Success     | Technical    |
   | H_05    | Tested search records             | Room number                                                        | Success   | Success      | Technical   |
   
## Low LEVEL TEST PLAN:
   
  | TEST ID |   HLT       |                   DESCRIPTION                        |                EXP I/P                   |  EXP O/P    | ACTUAL OUT | TYPE OF TEST |
  |    :--- |     :---:   |                      :---:                            |                                 ---:     |         --: |        --: |          --: |  
  | L_01    |  H_01       | Tested on function which accept two choices as input | username, password                       |    Success  | Success    |   Technical  |
  | L_02    |  H_02         | Tested on function which accept many string as input | Room number,name,address,phone no,nationality,periods,arrival date. |    Success  | Success    |   Technical  |
  | L_03    |  H_03,H_04, H_05 | Tested on function which accept one string as input  | Room number                            |    Success  | Success    |   Technical  |
