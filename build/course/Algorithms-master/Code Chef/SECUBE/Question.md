Sebi likes solving Rubik's cube a lot. He spends a lot of time in getting expertize in solving not only the 3 * 3 * 3 cube, but also the cubes of higher dimensions like 4 * 4 * 4, 5 * 5 * 5 and so on.

Chefland has a very famous toy shop which sells Rubik's cubes. This shop has interesting rules. Each day it sells cubes of a fixed dimension. Sebi has to buy new cubes daily primarily due to two reasons, one he handles the cube very roughly and the other that he solves the cube so many times during the day.

Today the shop is selling K * K * K size Rubik's cubes. In the morning, Sebi bought a cube from the shop. He had just started playing with it, suddenly his cute little sisters asked him to give them C units of the cube. Sebi's did not want to disappoint his sisters, so he immediately disassembled the cube into K * K * K units and gave C of those to his sisters.

Now Sebi wants to solve the Rubik's cube again, so he thought of going to market and buy some cubes so that he can create a Rubik's cube from those. The newly created cube can be of any dimension. For achieving that, he can disassemble and reassemble the cubes in the way he wants, but he does not want to waste any units of the cubes.

Can you please tell whether Sebi will be able to build such a Rubik's cube or not?

Input

The first line of the input contains an integer T denoting the number of the test cases.

Each test case contains two space separated integers K, C as defined in the statement.

Output

For each test case, output a single line containing "YES" or "NO" (without quotes) corresponding to the situation.

Constraints

1 ≤ T ≤ 105
0 ≤ C ≤ K3
2 ≤ K ≤ 100
Example

Input:
2
2 5
2 2

Output:
YES
NO
Explanation

Example case 1. In this case Sebi bought a Rubik's of size 2 * 2 * 2. His sisters wanted 5 units of cube. He disassembled the cube into 8 units immediately and gave 5 of them to his sisters. Now he is left with 3 units. He buys 3 cubes at the shop. Now, after disassembling, he has 3 + 3 * 8 = 27 cubes. By making use of these 27 cubes, he can make a Rubik's cube of size 3 * 3 * 3.
