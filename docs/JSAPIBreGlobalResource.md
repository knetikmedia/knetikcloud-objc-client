# JSAPIBreGlobalResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_description** | **NSString*** | A human readable description for display in admin pages | [optional] 
**_id** | **NSString*** | The id of the global definition. Default is a random guid. Cannot be updated | [optional] 
**key** | **NSString*** | The key for the global. Must be unique when combined with scope names. Usually a single descriptive word like &#39;purchases&#39; or &#39;logins&#39; | 
**name** | **NSString*** | A human readable name for display in admin pages | [optional] 
**scopes** | [**NSArray&lt;JSAPIBreGlobalScopeDefinition&gt;***](JSAPIBreGlobalScopeDefinition.md) | A list of scoping parameters. Allows the global to have a different value in different context such as a count of purchases for each user (by putting a &#39;user&#39; scope in this list). When using this global in a rule these scopes will need to be mapped with an expression to provide a value, similar to the parameters in an action | [optional] 
**systemGlobal** | **NSNumber*** | Where this global came from. System globals cannot be removed or updated | [optional] 
**type** | **NSString*** | The variable type the global stores. See the BRE variables endpoint for list | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


