from unittest import TestCase
import paula.ext as ext


class OpenMpTest(TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testNumOmpThreads(self):
        self.assertEqual(ext.omp_sum(), 66)  # 0+1+2+3+4+..+11 (assuming OMP_NUM_THREADS=12)

