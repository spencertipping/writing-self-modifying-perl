int hash (char *s) {
  const int fnv_prime  = 16777619;      // Magic numbers
  const int fnv_offset = 2166136261;
  int result = fnv_offset;
  char c;
  while (c = *s++) {
    result ^= c;
    result *= fnv_prime;
  }
  return result;
}