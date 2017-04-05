# JSAPIInventorySubscriptionResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**billDate** | **NSNumber*** | The date the subscription will be billed | [optional] 
**credit** | **NSNumber*** | A credit of money already applied to a subscription for the next bill, or a debt if negative | [optional] 
**creditLog** | [**NSArray&lt;JSAPISubscriptionCreditResource&gt;***](JSAPISubscriptionCreditResource.md) | A record of past and present credit/debt changes | [optional] 
**graceEnd** | **NSNumber*** | The date the grace period ends | [optional] 
**inventoryId** | **NSNumber*** | The id of the inventory | [optional] 
**inventoryStatus** | **NSString*** | The inventory status object | [optional] 
**itemId** | **NSNumber*** | The id of the item | [optional] 
**paymentMethod** | [**JSAPIPaymentMethodResource***](JSAPIPaymentMethodResource.md) | The payment method object | [optional] 
**recurringPrice** | **NSNumber*** | The recurring price | [optional] 
**sku** | **NSString*** | The sku of the subscription | [optional] 
**startDate** | **NSNumber*** | The date the subscription will start | [optional] 
**subscriptionStatus** | **NSNumber*** | The status of the subscription | [optional] 
**user** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | The user | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


