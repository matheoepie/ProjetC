#include "chaine.h"
	

void FormatAccent(unsigned char* pchar)
{
	while (*pchar)
	{
		switch (*pchar)
		{
		case 128:
			*pchar = 99;
			break; // ' � '
		case 129:
			*pchar = 117;
			break; // ' � '
		case 130:
			*pchar = 101;
			break; // ' � '
		case 131:
			*pchar = 97;
			break; // ' � '
		case 132:
			*pchar = 97;
			break; // ' � '
		case 133:
			*pchar = 97;
			break; // ' � '
		case 134:
			*pchar = 97;
			break; // ' � '
		case 135:
			*pchar = 99;
			break; // ' � '
		case 136:
			*pchar = 101;
			break; // ' � '
		case 137:
			*pchar = 101;
			break; // ' � '
		case 138:
			*pchar = 101;
			break; // ' � '
		case 139:
			*pchar = 105;
			break; // ' � '
		case 140:
			*pchar = 105;
			break; // ' � '
		case 141:
			*pchar = 105;
			break; // ' � '
		case 142:
			*pchar = 97;
			break; // ' � '
		case 143:
			*pchar = 97;
			break; // ' � '
		case 144:
			*pchar = 101;
			break; // ' � '
		case 145:
			*pchar = 97;
			break; // ' � '
		case 146:
			*pchar = 97;
			break; // ' � '
		case 147:
			*pchar = 111;
			break; // ' � '
		case 148:
			*pchar = 111;
			break; // ' � '
		case 149:
			*pchar = 111;
			break; // ' � '
		case 150:
			*pchar = 117;
			break; // ' � '
		case 151:
			*pchar = 117;
			break; // ' � '
		case 152:
			*pchar = 121;
			break; // ' � '
		case 153:
			*pchar = 111;
			break; // ' � '
		case 154:
			*pchar = 117;
			break; // ' � '
		case 160:
			*pchar = 97;
			break; // ' � '
		case 161:
			*pchar = 105;
			break; // ' � '
		case 162:
			*pchar = 111;
			break; // ' � '
		case 163:
			*pchar = 117;
			break; // ' � '
		case 164:
			*pchar = 110;
			break; // ' � '
		case 165:
			*pchar = 110;
			break; // ' � '
		case 181:
			*pchar = 97;
			break; // ' � '
		case 182:
			*pchar = 97;
			break; // ' � '
		case 183:
			*pchar = 97;
			break; // ' � '
		case 198:
			*pchar = 97;
			break; // ' � '
		case 199:
			*pchar = 97;
			break; // ' � '
		case 210:
			*pchar = 101;
			break; // ' � '
		case 211:
			*pchar = 101;
			break; // ' � '
		case 212:
			*pchar = 101;
			break; // ' � '
		case 214:
			*pchar = 105;
			break; // ' � '
		case 215:
			*pchar = 105;
			break; // ' � '
		case 216:
			*pchar = 105;
			break; // ' � '
		case 224:
			*pchar = 111;
			break; // ' � '
		case 226:
			*pchar = 111;
			break; // ' � '
		case 227:
			*pchar = 111;
			break; // ' � '
		case 228:
			*pchar = 111;
			break; // ' � '
		case 232:
			*pchar = 117;
			break; // ' � '
		case 233:
			*pchar = 117;
			break; // ' � '
		case 234:
			*pchar = 117;
			break; // ' � '
		case 235:
			*pchar = 121;
			break; // ' � '
		}

		pchar++;
	}
}
