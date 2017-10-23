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
**priceOverride** | **NSNumber*** | The recurring price that has been set to override the base price. Null if not overriding | [optional] 
**priceOverrideReason** | **NSString*** | An explanation for the reason the price is being overridden | [optional] 
**recurringPrice** | **NSNumber*** | The default recurring price | [optional] 
**sku** | **NSString*** | The recurring sku of the subscription | [optional] 
**startDate** | **NSNumber*** | The date the subscription will start | [optional] 
**subscriptionStatus** | **NSNumber*** | The status of the subscription | [optional] 
**user** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | The user | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


