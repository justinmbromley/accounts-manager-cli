add_test([=[AccountConstructor.CreationGettersDestruction]=]  /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/account_test [==[--gtest_filter=AccountConstructor.CreationGettersDestruction]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[AccountConstructor.CreationGettersDestruction]=]  PROPERTIES WORKING_DIRECTORY /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[AccountSetters.ChangeVariables]=]  /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build/account_test [==[--gtest_filter=AccountSetters.ChangeVariables]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[AccountSetters.ChangeVariables]=]  PROPERTIES WORKING_DIRECTORY /home/bromastone/Documents/cpp-projects/accounts-manager-cli/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  account_test_TESTS AccountConstructor.CreationGettersDestruction AccountSetters.ChangeVariables)
