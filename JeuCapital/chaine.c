#include "chaine.h"

int gestionAccent(char* pchar)
{
	while (*pchar) {
		switch (*pchar)

		{

		case -1:
			*pchar = 152;
			break;
		case -3:
			*pchar = 235;
			break;
		case -4:
			*pchar = 129;
			break;
		case -5:
			*pchar = 150;
			break;
		case -6:
			*pchar = 163;
			break;
		case -7:
			*pchar = 151;
			break;
		case -10:
			*pchar = 148;
			break;
		case -12:
			*pchar = 147;
			break;
		case -13:
			*pchar = 224;
			break;
		case -14:
			*pchar = 149;
			break;
		case -15:
			*pchar = 164;
			break;
		case -17:
			*pchar = 139;
			break;
		case -18:
			*pchar = 140;
			break;
		case -19:
			*pchar = 161;
			break;
		case -20:
			*pchar = 141;
			break;
		case -21:
			*pchar = 137;
			break;
		case -22:
			*pchar = 136;
			break;
		case -23:
			*pchar = 130;
			break;
		case -24:
			*pchar = 138;
			break;
		case -25:
			*pchar = 135;
			break;
		case -26:
			*pchar = 145;
			break;
		case -27:
			*pchar = 134;
			break;
		case -28:
			*pchar = 132;
			break;
		case -29:
			*pchar = 198;
			break;
		case -30:
			*pchar = 131;
			break;
		case -31:
			*pchar = 160;
			break;
		case -32:
			*pchar = 133;
			break;
		case -36:
			*pchar = 154;
			break;
		case -37:
			*pchar = 233;
			break;
		case -38:
			*pchar = 234;
			break;
		case -39:
			*pchar = 232;
			break;
		case -43:
			*pchar = 153;
			break;
		case -44:
			*pchar = 226;
			break;
		case -46:
			*pchar = 227;
			break;
		case -47:
			*pchar = 165;
			break;
		case -49:
			*pchar = 216;
			break;
		case -50:
			*pchar = 215;
			break;
		case -51:
			*pchar = 214;
			break;
		case -53:
			*pchar = 211;
			break;
		case -54:
			*pchar = 210;
			break;
		case -55:
			*pchar = 144;
			break;
		case -56:
			*pchar = 212;
			break;
		case -57:
			*pchar = 128;
			break;
		case -58:
			*pchar = 146;
			break;
		case -59:
			*pchar = 143;
			break;
		case -60:
			*pchar = 142;
			break;
		case -61:
			*pchar = 199;
			break;
		case -62:
			*pchar = 182;
			break;
		case -63:
			*pchar = 181;
			break;
		case -64:
			*pchar = 183;
			break;
		}
		pchar = pchar + 1;
	}
	return *pchar;

}
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
