// Copyright (c) 2015 Vijos Dev Team. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

char g_big_array[104857600];

int main() {
  g_big_array[104857599] = 1;
}
