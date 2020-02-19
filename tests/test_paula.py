from unittest import TestCase
import paula


class ModuleTest(TestCase):
    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testHello(self):
        self.assertEqual('Hello World', paula.hello())
