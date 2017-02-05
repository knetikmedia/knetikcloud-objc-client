#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGCartLineItem.h"
#import "SWGCartShippingAddressRequest.h"
#import "SWGCartShippingOption.h"
#import "SWGCouponDefinition.h"
#import "SWGSet.h"


@protocol SWGCart
@end

@interface SWGCart : SWGObject


@property(nonatomic) NSNumber* countryTax;

@property(nonatomic) NSArray<SWGCouponDefinition>* coupons;

@property(nonatomic) NSNumber* created;

@property(nonatomic) NSString* currencyCode;

@property(nonatomic) NSNumber* discountTotal;

@property(nonatomic) NSNumber* errorCode;

@property(nonatomic) NSString* errorMessage;

@property(nonatomic) NSNumber* grandTotal;

@property(nonatomic) NSString* _id;

@property(nonatomic) NSNumber* invoiceId;

@property(nonatomic) NSArray<SWGCartLineItem>* items;

@property(nonatomic) NSNumber* owner;

@property(nonatomic) NSArray<SWGCartShippingOption>* selectedShippingOptions;

@property(nonatomic) NSNumber* shippable;

@property(nonatomic) SWGCartShippingAddressRequest* shippingAddress;

@property(nonatomic) NSNumber* shippingCost;

@property(nonatomic) NSDictionary<SWGSet>* shippingOptions;

@property(nonatomic) NSNumber* stateTax;

@property(nonatomic) NSString* status;

@property(nonatomic) NSNumber* subtotal;

@property(nonatomic) NSNumber* updated;

@end
