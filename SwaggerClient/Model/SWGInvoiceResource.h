#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGInvoiceItemResource.h"
#import "SWGSimpleUserResource.h"


@protocol SWGInvoiceResource
@end

@interface SWGInvoiceResource : SWGObject

/* Line one of the customer's billing address [optional]
 */
@property(nonatomic) NSString* billingAddress1;
/* Line two of the customer's billing address [optional]
 */
@property(nonatomic) NSString* billingAddress2;
/* The city for the customer's billing address [optional]
 */
@property(nonatomic) NSString* billingCityName;
/* The country for the customer's billing address [optional]
 */
@property(nonatomic) NSString* billingCountryName;
/* The customer's name for the billing address [optional]
 */
@property(nonatomic) NSString* billingFullName;
/* The postal code for the customer's billing address [optional]
 */
@property(nonatomic) NSString* billingPostalCode;
/* The state for the customer's billing address [optional]
 */
@property(nonatomic) NSString* billingStateName;
/* The guid of the cart this invoice came from [optional]
 */
@property(nonatomic) NSString* cartId;
/* The date the invoice was created, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The code for the currency invoice prices are in [optional]
 */
@property(nonatomic) NSString* currency;
/* The fulfillment status of the invoice [optional]
 */
@property(nonatomic) NSString* currentFulfillmentStatus;
/* The payment status of the invoice [optional]
 */
@property(nonatomic) NSString* currentPaymentStatus;
/* The amount of money saved through coupons [optional]
 */
@property(nonatomic) NSNumber* discount;
/* The customer's email address [optional]
 */
@property(nonatomic) NSString* email;
/* The amount of federal tax added [optional]
 */
@property(nonatomic) NSNumber* fedTax;
/* The final price of the invoice [optional]
 */
@property(nonatomic) NSNumber* grandTotal;
/* The id of the invoice [optional]
 */
@property(nonatomic) NSNumber* _id;
/* A reference number for the invoice [optional]
 */
@property(nonatomic) NSString* invoiceNumber;
/* A list of items within the invoice [optional]
 */
@property(nonatomic) NSArray<SWGInvoiceItemResource>* items;
/* The customer's name prefix [optional]
 */
@property(nonatomic) NSString* namePrefix;
/* Notes about the order [optional]
 */
@property(nonatomic) NSString* orderNotes;
/* The id of an invoice this is a child of [optional]
 */
@property(nonatomic) NSNumber* parentInvoiceId;
/* The id of a saved payment method used to pay for the invoice [optional]
 */
@property(nonatomic) NSNumber* paymentMethodId;
/* The customer's phone number [optional]
 */
@property(nonatomic) NSString* phone;
/* The customer's phone number [optional]
 */
@property(nonatomic) NSString* phoneNumber;
/* The shipping cost [optional]
 */
@property(nonatomic) NSNumber* shipping;
/* Line one of the customer's shipping address [optional]
 */
@property(nonatomic) NSString* shippingAddress1;
/* Line two of the customer's shipping address [optional]
 */
@property(nonatomic) NSString* shippingAddress2;
/* The city for the customer's shipping address [optional]
 */
@property(nonatomic) NSString* shippingCityName;
/* The country for the customer's shipping address [optional]
 */
@property(nonatomic) NSString* shippingCountryName;
/* The customer's name for the shipping address [optional]
 */
@property(nonatomic) NSString* shippingFullName;
/* The postal code for the customer's shipping address [optional]
 */
@property(nonatomic) NSString* shippingPostalCode;
/* The state for the customer's shipping address [optional]
 */
@property(nonatomic) NSString* shippingStateName;
/* A number to use in sorting items. default 500. [optional]
 */
@property(nonatomic) NSNumber* sort;
/* The amount of state tax added [optional]
 */
@property(nonatomic) NSNumber* stateTax;
/* The sum price of all items before shipping, coupons and tax [optional]
 */
@property(nonatomic) NSNumber* subtotal;
/* The date the invoice was last updated, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* The owner of the invoice [optional]
 */
@property(nonatomic) SWGSimpleUserResource* user;
/* The id of the vendor [optional]
 */
@property(nonatomic) NSNumber* vendorId;
/* The name of the invoice [optional]
 */
@property(nonatomic) NSString* vendorName;

@end
