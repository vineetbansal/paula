from unittest import TestCase
import paula.ext as ext


class ExtensionTest(TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testExtension(self):
        self.assertEqual(7, ext.add(3, 4))
