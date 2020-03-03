from unittest import TestCase
import os
import paula.ext as ext


class OpenMpTest(TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testNumOmpThreads(self):
        self.assertEqual(ext.omp_sum(), 10)  # 0+1+2+3+4

