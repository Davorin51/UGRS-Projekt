#ifndef UUID139850785892000
#define UUID139850785892000

#include <EloquentTinyML.h>
#include <eloquent_tinyml/tensorflow.h>

#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

#ifndef ARENA_SIZE
#define ARENA_SIZE 4096
#endif

/** model size = 89520 bytes **/
const unsigned char modelData[] DATA_ALIGN_ATTRIBUTE = { 0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x28, 0x52, 0x01, 0x00, 0x38, 0x52, 0x01, 0x00, 0x5c, 0x5d, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0xff, 0xff, 0xff, 0x15, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x32, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6a, 0xae, 0xfe, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x36, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xdc, 0xff, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x19, 0x00, 0x00, 0x00, 0x34, 0x51, 0x01, 0x00, 0x2c, 0x51, 0x01, 0x00, 0x18, 0x51, 0x01, 0x00, 0xc0, 0x50, 0x01, 0x00, 0x30, 0x50, 0x01, 0x00, 0x20, 0x4f, 0x01, 0x00, 0x10, 0x4d, 0x01, 0x00, 0x00, 0x4c, 0x01, 0x00, 0x70, 0x4b, 0x01, 0x00, 0x60, 0x49, 0x01, 0x00, 0x50, 0x29, 0x01, 0x00, 0x40, 0xa9, 0x00, 0x00, 0x30, 0x29, 0x00, 0x00, 0x20, 0x09, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x4a, 0xaf, 0xfe, 0xff, 0x04, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x31, 0x2e, 0x30, 0x00, 0x00, 0xaa, 0xaf, 0xfe, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0xa4, 0xfe, 0xff, 0xac, 0xa4, 0xfe, 0xff, 0xb0, 0xa4, 0xfe, 0xff, 0xb4, 0xa4, 0xfe, 0xff, 0xb8, 0xa4, 0xfe, 0xff, 0xbc, 0xa4, 0xfe, 0xff, 0xc0, 0xa4, 0xfe, 0xff, 0xe2, 0xaf, 0xfe, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0f, 0x7e, 0x1e, 0xbe, 0x9a, 0xb1, 0x09, 0x3f, 0x6f, 0xd2, 0x74, 0xbe, 0x3f, 0x6f, 0x11, 0xbe, 0xf2, 0x2f, 0x01, 0xbf, 0x1f, 0xf7, 0x71, 0x3d, 0xa8, 0x19, 0x21, 0x3e, 0xcd, 0xa9, 0x12, 0xbf, 0x90, 0xb1, 0xb8, 0xbe, 0xf5, 0xf6, 0x97, 0x3e, 0x82, 0x21, 0x0a, 0x3f, 0x8b, 0xc2, 0x95, 0xbe, 0x52, 0xdd, 0xdc, 0xbe, 0x7b, 0xdd, 0xd5, 0x3d, 0xee, 0x92, 0x98, 0x3e, 0xef, 0x65, 0x14, 0x3e, 0x2e, 0xb0, 0xfe, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x83, 0x32, 0x9f, 0xbe, 0x76, 0x71, 0xa7, 0xbd, 0xc5, 0xef, 0x67, 0x3e, 0x01, 0x60, 0x9f, 0xbe, 0x95, 0xc7, 0xac, 0xbe, 0x7c, 0x07, 0x1d, 0xbe, 0x9a, 0x0f, 0x8b, 0xbe, 0xa6, 0x0f, 0xa2, 0xbe, 0xca, 0xeb, 0xcf, 0x3e, 0x4a, 0x09, 0x88, 0x3d, 0x73, 0xd2, 0x66, 0xbe, 0xbf, 0x55, 0xb1, 0x3e, 0x3c, 

/**
 * Wrapper around the EloquentTinyML library
 */
template<uint32_t arenaSize>
class TensorFlowPorter {
    public:
        Eloquent::TinyML::TensorFlow::AllOpsTensorFlow<4, 1, arenaSize> tf;

        /**
         * Init model
         */
        bool begin() {
            return tf.begin(modelData);
        }

        /**
         * Proxy
         */
        uint8_t predict(uint8_t *input, uint8_t *output = NULL) {
            return tf.predict(input, output);
        }

        /**
         * Proxy
         */
        int8_t predict(int8_t *input, int8_t *output = NULL) {
            return tf.predict(input, output);
        }

        /**
         * Proxy
         */
        float predict(float *input, float *output = NULL) {
            return tf.predict(input, output);
        }

        /**
         * Proxy
         */
        template<typename T>
        uint8_t predictClass(T *input) {
            return tf.predictClass(input);
        }

        /**
         * Proxy
         */
        float getScoreAt(uint8_t index) {
            return tf.getScoreAt(index);
        }

        /**
         * Proxy
         */
        String getErrorMessage() {
            return tf.getErrorMessage();
        }
};



TensorFlowPorter<ARENA_SIZE> ColorRegressionNN;


#endif
