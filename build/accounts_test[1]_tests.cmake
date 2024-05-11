add_test([=[Accounts.CreationGettersDestruction]=]  /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/accounts_test [==[--gtest_filter=Accounts.CreationGettersDestruction]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Accounts.CreationGettersDestruction]=]  PROPERTIES WORKING_DIRECTORY /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  accounts_test_TESTS Accounts.CreationGettersDestruction)
