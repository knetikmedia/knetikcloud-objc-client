#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGInvoiceLogEntry
@end

@interface SWGInvoiceLogEntry : SWGObject

/* The date this event occured as a unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* date;
/* The ID of the invoice [optional]
 */
@property(nonatomic) NSNumber* invoiceId;
/* A message describing the event [optional]
 */
@property(nonatomic) NSString* message;
/* The type of event [optional]
 */
@property(nonatomic) NSString* type;

@end
