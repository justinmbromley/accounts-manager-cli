add_test([=[Constructor.NoAddedAccounts]=]  /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/accounts_test [==[--gtest_filter=Constructor.NoAddedAccounts]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Constructor.NoAddedAccounts]=]  PROPERTIES WORKING_DIRECTORY /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  accounts_test_TESTS Constructor.NoAddedAccounts)
