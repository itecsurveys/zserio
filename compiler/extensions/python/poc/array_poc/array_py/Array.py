"""
Automatically generated by Zserio Python extension version 1.2.0.
"""

import zserio

import array_py.Data

class Array():
    def __init__(self, templateArgumentValues_):
        self._values_ = None
        self.templateArgumentValues_ = templateArgumentValues_

    @classmethod
    def fromReader(cls, templateArgumentValues_, reader):
        instance = cls(templateArgumentValues_)
        instance.read(reader)

        return instance

    @classmethod
    def fromFields(cls, templateArgumentValues_, values_):
        instance = cls(templateArgumentValues_)
        instance.setValue(values_)

        return instance

    def __eq__(self, other):
        if isinstance(other, Array):
            return self._values_ == other._values_

        return False

    def __hash__(self):
        result = zserio.hashcode.HASH_SEED
        result = zserio.hashcode.calcHashCode(result, hash(self._values_))

        return result

    def getValues(self):
        return None if self._values_ is None else self._values_.getRawArray()

    def setValues(self, values_):
        self._values_ = zserio.array.Array(zserio.array.ObjectArrayTraits(self._elementCreator_values), values_, isAuto=True)

    def bitSizeOf(self, bitPosition=0):
        endBitPosition = bitPosition
        endBitPosition += self._values_.bitSizeOf(endBitPosition)

        return endBitPosition - bitPosition

    def initializeOffsets(self, bitPosition):
        endBitPosition = bitPosition
        endBitPosition = self._values_.initializeOffsets(endBitPosition)

        return endBitPosition

    def read(self, reader):
        self._values_ = zserio.array.Array.fromReader(zserio.array.ObjectArrayTraits(self._elementCreator_values), reader, isAuto=True)

    def write(self, writer, *, callInitializeOffsets=True):
        del callInitializeOffsets

        self._values_.write(writer)

    def _elementCreator_values(self, reader, _index):
        return self.templateArgumentValues_.fromReader(reader)
