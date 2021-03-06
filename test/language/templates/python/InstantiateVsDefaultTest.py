import unittest
import zserio

from testutils import getZserioApi

class InstantiateVsDefaultTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.api = getZserioApi(__file__, "templates.zs").instantiate_vs_default

    def testReadWrite(self):
        instantiateVsDefault = self.api.InstantiateVsDefault.fromFields(
            self.api.pkg.Test_uint32.fromFields(13),
            self.api.TStr.fromFields("test")
        )

        writer = zserio.BitStreamWriter()
        instantiateVsDefault.write(writer)
        reader = zserio.BitStreamReader(writer.getByteArray())
        readInstantiateVsDefault = self.api.InstantiateVsDefault()
        readInstantiateVsDefault.read(reader)
        self.assertEqual(instantiateVsDefault, readInstantiateVsDefault)
