# JSAPISubscriptionPlanResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this subscription | [optional] 
**billingCycleLength** | **NSNumber*** | The length of the billing cycle in number of billing cycle unit | 
**billingCycleUnit** | **NSString*** | The time period unit to apply to the length of billing cycles | 
**consolidated** | **NSNumber*** | Whether this plan will be renewed on the consolidated billing cycle | 
**currencyCode** | **NSString*** | The ISO3 currency code to use for the fees | 
**endDate** | **NSNumber*** | Used to schedule plan availability end date | [optional] 
**firstBillingCycleLength** | **NSNumber*** | Optional override for the length of the first billing cycle before the first recurring billing | [optional] 
**firstBillingCycleUnit** | **NSString*** | The time period unit to apply to the length of the first billing cycle. Required when first_billing_cycle_length is specified | [optional] 
**gracePeriod** | **NSNumber*** | The number of late payment days before a subscription is canceled | 
**_id** | **NSString*** | The id of the plan used to generate the SKUs | [optional] 
**initialFee** | **NSNumber*** | The fee charged when the subscription is purchased | 
**initialSku** | **NSString*** | The SKU to be used when purchasing the subscription through the cart | [optional] 
**latePaymentFee** | **NSNumber*** | The fee to add to the bill when an invoice has gone unpaid passed the grace period | 
**latePaymentSku** | **NSString*** | The SKU that will show on the invoice when the subscription is delinquent | [optional] 
**locked** | **NSNumber*** | Whether this plan is locked because it has been purchased by at least one user.  When locked, a number of properties can no longer be changed | [optional] 
**maxBillAttempts** | **NSNumber*** | The number of charge attempts before the subscription becomes delinquent | 
**maxCycles** | **NSNumber*** | Maximum number of renewals. If a migration plan is provided, the subscription will automatically switch to it when this limit is reached | [optional] 
**migrateToPlan** | **NSString*** | Automatically migrate to the specified plan when the subscription is first renewed | [optional] 
**minCycles** | **NSNumber*** | The minimum number of renewals to charge for | [optional] 
**name** | **NSString*** | The name of the plan used to generate the SKUs | 
**published** | **NSNumber*** | Whether this plan is currently available | 
**reactivationFee** | **NSNumber*** | The fee to charge when a suspended subscription is to be re-activated | 
**reactivationSku** | **NSString*** | The SKU that will show on the invoice when the subscription is re-activated after a suspension | [optional] 
**recurringFee** | **NSNumber*** | The recurring fee to charge for each renewal | 
**recurringSku** | **NSString*** | The SKU that will show on the invoice when the subscription is activated | [optional] 
**startDate** | **NSNumber*** | Used to schedule plan availability start date | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


