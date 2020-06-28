#include <crow/crow.hpp>

int main()
{
    crow::init("https://a2bfbfbd7eb74a66b799535fad454555@sentry.io/1535511");
    crow::install_handlers();

    crow::configure_scope([](crow::scope& scope) {
        scope.set_extra("test_case", "signal");
    });

    unsigned int a = 0u;
    unsigned int b = 10u;
    b /= a;
}