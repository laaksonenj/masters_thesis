#include <Eigen/Core>
#include <gmpxx.h>

namespace fem
{
/* Rational */
using MatrixXmpq = Eigen::Matrix<mpq_class, Eigen::Dynamic, Eigen::Dynamic>;
using VectorXmpq = Eigen::Matrix<mpq_class, Eigen::Dynamic, 1>;

/* Integer */
using MatrixXmpz = Eigen::Matrix<mpz_class, Eigen::Dynamic, Eigen::Dynamic>;
using VectorXmpz = Eigen::Matrix<mpz_class, Eigen::Dynamic, 1>;

/* Float */
using MatrixXmpf = Eigen::Matrix<mpf_class, Eigen::Dynamic, Eigen::Dynamic>;
using VectorXmpf = Eigen::Matrix<mpf_class, Eigen::Dynamic, 1>;
}
