# JSAPIUserInventoryResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**behaviorData** | **NSObject*** | A map of data for behaviors | [optional] 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since epoch | [optional] 
**expires** | **NSNumber*** | The date/time this resource exires in seconds since epoch. Null for no expiration. For subscriptions, this is the end of the &#39;grace period&#39; if left unpaid | [optional] 
**_id** | **NSNumber*** | The id of the inventory | [optional] 
**invoiceId** | **NSNumber*** | The id of the invoice that resulted in this inventory, if any | [optional] 
**itemId** | **NSNumber*** | The id of the item | [optional] 
**itemName** | **NSString*** | The name of the item | [optional] 
**itemTypeHint** | **NSString*** | The type hint of the item | [optional] 
**status** | **NSString*** | The status of the inventory. Pending inventory is not yet ready for use. Inactive inventory has expired or been used up | [optional] 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since epoch | [optional] 
**user** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | The id of the user this inventory belongs to | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


