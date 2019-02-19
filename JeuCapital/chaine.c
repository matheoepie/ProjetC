#include "chaine.h"
	

void FormatAccent(unsigned char* pchar)
{
	while (*pchar)
	{
		switch (*pchar)
		{
		case 128:
			*pchar = 99;
			break; // ' Ç '
		case 129:
			*pchar = 117;
			break; // ' ü '
		case 130:
			*pchar = 101;
			break; // ' é '
		case 131:
			*pchar = 97;
			break; // ' â '
		case 132:
			*pchar = 97;
			break; // ' ä '
		case 133:
			*pchar = 97;
			break; // ' à '
		case 134:
			*pchar = 97;
			break; // ' å '
		case 135:
			*pchar = 99;
			break; // ' ç '
		case 136:
			*pchar = 101;
			break; // ' ê '
		case 137:
			*pchar = 101;
			break; // ' ë '
		case 138:
			*pchar = 101;
			break; // ' è '
		case 139:
			*pchar = 105;
			break; // ' ï '
		case 140:
			*pchar = 105;
			break; // ' î '
		case 141:
			*pchar = 105;
			break; // ' ì '
		case 142:
			*pchar = 97;
			break; // ' Ä '
		case 143:
			*pchar = 97;
			break; // ' Å '
		case 144:
			*pchar = 101;
			break; // ' É '
		case 145:
			*pchar = 97;
			break; // ' æ '
		case 146:
			*pchar = 97;
			break; // ' Æ '
		case 147:
			*pchar = 111;
			break; // ' ô '
		case 148:
			*pchar = 111;
			break; // ' ö '
		case 149:
			*pchar = 111;
			break; // ' ò '
		case 150:
			*pchar = 117;
			break; // ' û '
		case 151:
			*pchar = 117;
			break; // ' ù '
		case 152:
			*pchar = 121;
			break; // ' ÿ '
		case 153:
			*pchar = 111;
			break; // ' Ö '
		case 154:
			*pchar = 117;
			break; // ' Ü '
		case 160:
			*pchar = 97;
			break; // ' á '
		case 161:
			*pchar = 105;
			break; // ' í '
		case 162:
			*pchar = 111;
			break; // ' ó '
		case 163:
			*pchar = 117;
			break; // ' ú '
		case 164:
			*pchar = 110;
			break; // ' ñ '
		case 165:
			*pchar = 110;
			break; // ' Ñ '
		case 181:
			*pchar = 97;
			break; // ' Á '
		case 182:
			*pchar = 97;
			break; // ' Â '
		case 183:
			*pchar = 97;
			break; // ' À '
		case 198:
			*pchar = 97;
			break; // ' ã '
		case 199:
			*pchar = 97;
			break; // ' Ã '
		case 210:
			*pchar = 101;
			break; // ' Ê '
		case 211:
			*pchar = 101;
			break; // ' Ë '
		case 212:
			*pchar = 101;
			break; // ' È '
		case 214:
			*pchar = 105;
			break; // ' Í '
		case 215:
			*pchar = 105;
			break; // ' Î '
		case 216:
			*pchar = 105;
			break; // ' Ï '
		case 224:
			*pchar = 111;
			break; // ' ó '
		case 226:
			*pchar = 111;
			break; // ' Ô '
		case 227:
			*pchar = 111;
			break; // ' Ò '
		case 228:
			*pchar = 111;
			break; // ' Õ '
		case 232:
			*pchar = 117;
			break; // ' Ú '
		case 233:
			*pchar = 117;
			break; // ' Û '
		case 234:
			*pchar = 117;
			break; // ' Ù '
		case 235:
			*pchar = 121;
			break; // ' ý '
		}

		pchar++;
	}
}
