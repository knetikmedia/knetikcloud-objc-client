#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGBillingReport
@end

@interface SWGBillingReport : SWGObject


@property(nonatomic) NSNumber* created;

@property(nonatomic) NSString* _id;

@property(nonatomic) NSArray<NSString*>* lastKnownFailures;

@property(nonatomic) NSDictionary<NSString*, NSNumber*>* statistics;

@end
