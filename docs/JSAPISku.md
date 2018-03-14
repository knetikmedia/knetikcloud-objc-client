# JSAPISku

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template | [optional] 
**currencyCode** | **NSString*** | The currency code for the SKU, a three letter string (ISO3) | 
**_description** | **NSString*** | The friendly name of the SKU as it will appear on invoices and reports. Typically represents the option name like red, large, etc | 
**inventory** | **NSNumber*** | The number of SKUs currently in stock | [optional] 
**minInventoryThreshold** | **NSNumber*** | Alerts vendor when SKU inventory drops below this value | [optional] 
**notAvailable** | **NSNumber*** |  | [optional] 
**notDisplayable** | **NSNumber*** |  | [optional] 
**originalPrice** | **NSNumber*** | The base price before any sale | 
**price** | **NSNumber*** | The current price of the SKU with sales, if any. Set original_price for the base | [optional] 
**published** | **NSNumber*** | Whether or not the SKU is currently visible to users. This will not block users from purchase. Use start_date or stop_date to prevent purchase. Default: true | [optional] 
**saleId** | **NSNumber*** | The id of a sale affecting the price, if any | [optional] 
**saleName** | **NSString*** | The name of a sale affecting the price, if any | [optional] 
**sku** | **NSString*** | The stock keeping unit (SKU), a unique identifier for a given product.  Max 40 characters | 
**startDate** | **NSNumber*** | The date the sku becomes visible (if published) and available for purchase, unix timestamp in seconds.  If set to null, sku will become available immediately | [optional] 
**stopDate** | **NSNumber*** | The date the sku becomes hidden and unavailable for purchase, unix timestamp in seconds.  If set to null, sku is always available | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


