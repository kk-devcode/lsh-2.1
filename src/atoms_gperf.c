/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: gperf -LANSI-C -t -c -C -l -k'1,3,6,10,21,$' -N gperf_atom  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


/* Automatically generated by process_atoms,
 *  lör 9 mar 2013 09:17:14 CET
 * Do not edit! */

struct atom_assoc { const char *name; int id; };

#define TOTAL_KEYWORDS 107
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 29
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 347
/* maximum key range = 347, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348,   5, 348, 348,   0, 100,
       10,  10, 348,   0,  60, 348,  35,  15, 348, 348,
      348, 348, 348, 348, 348,  10, 348, 348, 348,  15,
        0,   5,   5,   0, 348,   0,   5,   5, 348, 348,
        0,   0,  20,   0,   0,  20,   0, 348,   0, 348,
      348, 348, 348, 348, 348, 348, 348,  15,  25,   0,
       30,  80,   5,  55,  80,   0, 348,   0,   5,   5,
       10,   0,  35,  90,   5,  20,   0,   5,  15,   5,
       60,  50, 120, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348, 348, 348, 348, 348,
      348, 348, 348, 348, 348, 348
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[20]];
      /*FALLTHROUGH*/
      case 20:
      case 19:
      case 18:
      case 17:
      case 16:
      case 15:
      case 14:
      case 13:
      case 12:
      case 11:
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
      case 8:
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct atom_assoc *
gperf_atom (register const char *str, register unsigned int len)
{
  static const unsigned char lengthtable[] =
    {
       0,  1,  0,  3,  4,  0,  0,  0,  3,  4,  0,  1,  0,  3,
       4,  0,  0,  0,  8,  4,  0,  1,  0,  0,  4,  0,  0,  0,
       0,  4,  0,  1,  7,  3,  4,  0,  0, 12, 13,  4, 10,  1,
      12,  0, 14,  0, 11,  0,  0, 14,  0,  1,  0,  0,  4, 10,
      11,  7,  0, 14,  0,  1,  0,  3, 14, 10, 11,  0,  0, 14,
      15,  1,  0, 13, 14,  0,  0,  0, 13,  9, 10,  6,  0,  8,
      14,  0,  0,  0, 13, 14, 10,  6,  0,  8, 14,  0,  0,  0,
       8, 14, 20,  1, 12,  8,  4, 10,  0,  0,  8, 14,  5,  1,
       0,  3, 14, 10,  0, 12,  0,  9,  0,  1,  0,  0, 14,  0,
       0,  0, 13,  9,  0, 11, 12,  0, 14,  0, 11,  0,  0, 14,
       0,  0,  7,  0,  4,  0,  0,  7,  0,  4,  0,  0, 12,  0,
       9, 15,  0,  0,  0,  0, 15,  1,  0,  0,  4, 20,  0,  0,
       0, 29, 10, 26,  0,  0,  0,  0, 11,  0,  0,  0,  0,  1,
       0,  0,  0,  0, 11,  0,  0, 29,  0,  0, 12,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  9,
       0,  0,  0,  0,  0,  0,  0, 12,  0,  0,  0,  0,  0,  0,
       9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,  3,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  7,  0,  0,  0,  0,  0,  0,  0,  0, 26, 27
    };
  static const struct atom_assoc wordlist[] =
    {
      {"", 0},
      {"c", ATOM_C},
      {"", 0},
      {"INT", ATOM_INT},
      {"QUIT", ATOM_QUIT},
      {"", 0}, {"", 0}, {"", 0},
      {"HUP", ATOM_HUP},
      {"SEGV", ATOM_SEGV},
      {"", 0},
      {"r", ATOM_R},
      {"", 0},
      {"ILL", ATOM_ILL},
      {"KILL", ATOM_KILL},
      {"", 0}, {"", 0}, {"", 0},
      {"Xpkcs5v2", ATOM_XPKCS5V2},
      {"PIPE", ATOM_PIPE},
      {"", 0},
      {"n", ATOM_N},
      {"", 0}, {"", 0},
      {"spki", ATOM_SPKI},
      {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"TERM", ATOM_TERM},
      {"", 0},
      {"a", ATOM_A},
      {"arcfour", ATOM_ARCFOUR},
      {"FPE", ATOM_FPE},
      {"ABRT", ATOM_ABRT},
      {"", 0}, {"", 0},
      {"blowfish-cbc", ATOM_BLOWFISH_CBC},
      {"rsa-pkcs1-md5", ATOM_RSA_PKCS1_MD5},
      {"ALRM", ATOM_ALRM},
      {"auth-agent", ATOM_AUTH_AGENT},
      {"s", ATOM_S},
      {"blowfish-ctr", ATOM_BLOWFISH_CTR},
      {"", 0},
      {"twofish192-cbc", ATOM_TWOFISH192_CBC},
      {"", 0},
      {"cast128-ctr", ATOM_CAST128_CTR},
      {"", 0}, {"", 0},
      {"twofish192-ctr", ATOM_TWOFISH192_CTR},
      {"", 0},
      {"b", ATOM_B},
      {"", 0}, {"", 0},
      {"USR2", ATOM_USR2},
      {"aes192-cbc", ATOM_AES192_CBC},
      {"twofish-cbc", ATOM_TWOFISH_CBC},
      {"session", ATOM_SESSION},
      {"", 0},
      {"serpent192-cbc", ATOM_SERPENT192_CBC},
      {"", 0},
      {"d", ATOM_D},
      {"", 0},
      {"dsa", ATOM_DSA},
      {"serpent192-ctr", ATOM_SERPENT192_CTR},
      {"aes192-ctr", ATOM_AES192_CTR},
      {"cast128-cbc", ATOM_CAST128_CBC},
      {"", 0}, {"", 0},
      {"twofish128-cbc", ATOM_TWOFISH128_CBC},
      {"forwarded-tcpip", ATOM_FORWARDED_TCPIP},
      {"p", ATOM_P},
      {"", 0},
      {"spki-sign-rsa", ATOM_SPKI_SIGN_RSA},
      {"twofish128-ctr", ATOM_TWOFISH128_CTR},
      {"", 0}, {"", 0}, {"", 0},
      {"spki-sign-dss", ATOM_SPKI_SIGN_DSS},
      {"subsystem", ATOM_SUBSYSTEM},
      {"aes128-cbc", ATOM_AES128_CBC},
      {"gssapi", ATOM_GSSAPI},
      {"", 0},
      {"xon-xoff", ATOM_XON_XOFF},
      {"serpent128-cbc", ATOM_SERPENT128_CBC},
      {"", 0}, {"", 0}, {"", 0},
      {"tcpip-forward", ATOM_TCPIP_FORWARD},
      {"serpent128-ctr", ATOM_SERPENT128_CTR},
      {"aes128-ctr", ATOM_AES128_CTR},
      {"signal", ATOM_SIGNAL},
      {"", 0},
      {"password", ATOM_PASSWORD},
      {"twofish256-cbc", ATOM_TWOFISH256_CBC},
      {"", 0}, {"", 0}, {"", 0},
      {"3des-cbc", ATOM_3DES_CBC},
      {"twofish256-ctr", ATOM_TWOFISH256_CTR},
      {"cancel-tcpip-forward", ATOM_CANCEL_TCPIP_FORWARD},
      {"y", ATOM_Y},
      {"pgp-sign-rsa", ATOM_PGP_SIGN_RSA},
      {"3des-ctr", ATOM_3DES_CTR},
      {"none", ATOM_NONE},
      {"aes256-cbc", ATOM_AES256_CBC},
      {"", 0}, {"", 0},
      {"hmac-md5", ATOM_HMAC_MD5},
      {"serpent256-cbc", ATOM_SERPENT256_CBC},
      {"shell", ATOM_SHELL},
      {"g", ATOM_G},
      {"", 0},
      {"env", ATOM_ENV},
      {"serpent256-ctr", ATOM_SERPENT256_CTR},
      {"aes256-ctr", ATOM_AES256_CTR},
      {"", 0},
      {"direct-tcpip", ATOM_DIRECT_TCPIP},
      {"", 0},
      {"publickey", ATOM_PUBLICKEY},
      {"", 0},
      {"x", ATOM_X},
      {"", 0}, {"", 0},
      {"ssh-connection", ATOM_SSH_CONNECTION},
      {"", 0}, {"", 0}, {"", 0},
      {"window-change", ATOM_WINDOW_CHANGE},
      {"rsa-pkcs1", ATOM_RSA_PKCS1},
      {"", 0},
      {"exit-signal", ATOM_EXIT_SIGNAL},
      {"pgp-sign-dss", ATOM_PGP_SIGN_DSS},
      {"", 0},
      {"auth-agent-req", ATOM_AUTH_AGENT_REQ},
      {"", 0},
      {"exit-status", ATOM_EXIT_STATUS},
      {"", 0}, {"", 0},
      {"rsa-pkcs1-sha1", ATOM_RSA_PKCS1_SHA1},
      {"", 0}, {"", 0},
      {"ssh-rsa", ATOM_SSH_RSA},
      {"", 0},
      {"USR1", ATOM_USR1},
      {"", 0}, {"", 0},
      {"ssh-dss", ATOM_SSH_DSS},
      {"", 0},
      {"zlib", ATOM_ZLIB},
      {"", 0}, {"", 0},
      {"srp-verifier", ATOM_SRP_VERIFIER},
      {"", 0},
      {"hostbased", ATOM_HOSTBASED},
      {"x509v3-sign-rsa", ATOM_X509V3_SIGN_RSA},
      {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"x509v3-sign-dss", ATOM_X509V3_SIGN_DSS},
      {"e", ATOM_E},
      {"", 0}, {"", 0},
      {"exec", ATOM_EXEC},
      {"keyboard-interactive", ATOM_KEYBOARD_INTERACTIVE},
      {"", 0}, {"", 0}, {"", 0},
      {"srp-ring1-sha1@lysator.liu.se", ATOM_SRP_RING1_SHA1_LOCAL},
      {"public-key", ATOM_PUBLIC_KEY},
      {"serpent-cbc@lysator.liu.se", ATOM_SERPENT_CBC_LOCAL},
      {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"private-key", ATOM_PRIVATE_KEY},
      {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"q", ATOM_Q},
      {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"hmac-md5-96", ATOM_HMAC_MD5_96},
      {"", 0}, {"", 0},
      {"signal-unknown@lysator.liu.se", ATOM_SIGNAL_UNKNOWN_LOCAL},
      {"", 0}, {"", 0},
      {"hmac-sha1-96", ATOM_HMAC_SHA1_96},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"ssh-ring1", ATOM_SSH_RING1},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"ssh-userauth", ATOM_SSH_USERAUTH},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"hmac-sha1", ATOM_HMAC_SHA1},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0},
      {"pty-req", ATOM_PTY_REQ},
      {"x11", ATOM_X11},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"", 0},
      {"x11-req", ATOM_X11_REQ},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
      {"diffie-hellman-group1-sha1", ATOM_DIFFIE_HELLMAN_GROUP1_SHA1},
      {"diffie-hellman-group14-sha1", ATOM_DIFFIE_HELLMAN_GROUP14_SHA1}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &wordlist[key];
          }
    }
  return 0;
}
