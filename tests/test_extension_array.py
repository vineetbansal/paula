from unittest import TestCase
import numpy as np
import paula.ext as ext


class ExtensionTest(TestCase):
    def setUp(self):
        # When passing numpy arrays to c++ functions, we need to strictly adhere to the appropriate dtype
        self.x = np.arange(20).reshape(5, 4).astype('double')

    def tearDown(self):
        pass

    def testZeroFirst(self):
        ext.zero_first(self.x)
        self.assertEqual(0, self.x[0, 0])
