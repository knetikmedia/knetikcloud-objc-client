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




@protocol SWGVendorResource
@end

@interface SWGVendorResource : SWGObject

/* Whether the vendor is active.  Default = true [optional]
 */
@property(nonatomic) NSNumber* active;
/* The date the vendor was added. Unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* createDate;
/* A description of the vendor [optional]
 */
@property(nonatomic) NSString* _description;
/* The id of the vendor [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The url of an image for the vendor [optional]
 */
@property(nonatomic) NSString* imageUrl;
/* Whether the vendor needs to manually approve invoices before they are paid.  A separate checkout flow is required in this case.  Default: false [optional]
 */
@property(nonatomic) NSNumber* manualApproval;
/* The name of the vendor 
 */
@property(nonatomic) NSString* name;
/* The primary email address for the vendor [optional]
 */
@property(nonatomic) NSString* primaryContactEmail;
/* The name of the primary contact for the vendor [optional]
 */
@property(nonatomic) NSString* primaryContactName;
/* The primary phone number for the vendor [optional]
 */
@property(nonatomic) NSString* primaryContactPhone;
/* The email address for sale inquiries for the vendor [optional]
 */
@property(nonatomic) NSString* salesEmail;
/* The email address for support inquiries for the vendor [optional]
 */
@property(nonatomic) NSString* supportEmail;
/* The date the vendor was last updated. Unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* updateDate;
/* The url for the vendor's site [optional]
 */
@property(nonatomic) NSString* url;

@end
