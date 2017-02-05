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


#import "SWGSimpleUserResource.h"


@protocol SWGDeviceResource
@end

@interface SWGDeviceResource : SWGObject

/* The authorization code for the device [optional]
 */
@property(nonatomic) NSString* authorization;
/* The current condition of the device (New, Defective, Reconditioned) [optional]
 */
@property(nonatomic) NSString* condition;
/* The date the device log was created [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The key/value pairs for extended data [optional]
 */
@property(nonatomic) NSDictionary<NSString*, NSString*>* data;
/* The description of the device [optional]
 */
@property(nonatomic) NSString* _description;
/* The type of the device [optional]
 */
@property(nonatomic) NSString* deviceType;
/* The unique ID for this device. Cannot be changed once created 
 */
@property(nonatomic) NSNumber* _id;
/* The location of the device [optional]
 */
@property(nonatomic) NSString* location;
/* The MAC (media access control) address of the device [optional]
 */
@property(nonatomic) NSString* macAddress;
/* The make of the device [optional]
 */
@property(nonatomic) NSString* make;
/* The model of the device [optional]
 */
@property(nonatomic) NSString* model;
/* The name of the device [optional]
 */
@property(nonatomic) NSString* name;
/* The OS (operating system) on the device [optional]
 */
@property(nonatomic) NSString* os;
/* The serial number of the device [optional]
 */
@property(nonatomic) NSString* serial;
/* The current status the device (Active, Pending Active, Inactive, Repair [optional]
 */
@property(nonatomic) NSString* status;
/* The date the device log was updated [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* The user that owns the device [optional]
 */
@property(nonatomic) SWGSimpleUserResource* user;

@end
