#import <Foundation/Foundation.h>
#import "JSAPIDeviceResource.h"
#import "JSAPIPageResourceDeviceResource_.h"
#import "JSAPIResult.h"
#import "JSAPISimpleUserResource.h"
#import "JSAPIApi.h"

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



@interface JSAPIDevicesApi: NSObject <JSAPIApi>

extern NSString* kJSAPIDevicesApiErrorDomain;
extern NSInteger kJSAPIDevicesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Add device users
/// 
///
/// @param userResources userResources
/// @param _id id
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIDeviceResource*
-(NSURLSessionTask*) addDeviceUsersWithUserResources: (NSArray<JSAPISimpleUserResource>*) userResources
    _id: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;


/// Create a device
/// 
///
/// @param device device
/// 
///  code:201 message:"Created",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIDeviceResource*
-(NSURLSessionTask*) createDeviceWithDevice: (JSAPIDeviceResource*) device
    completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;


/// Delete a device
/// 
///
/// @param _id id
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteDeviceWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a device user
/// 
///
/// @param _id The id of the device
/// @param userId The user id of the device user
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteDeviceUserWithId: (NSNumber*) _id
    userId: (NSNumber*) userId
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete all device users
/// 
///
/// @param _id The id of the device
/// @param filterId Filter for device users to delete with a user id in a given comma separated list of ids (optional)
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) deleteDeviceUsersWithId: (NSNumber*) _id
    filterId: (NSString*) filterId
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single device
/// 
///
/// @param _id id
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIDeviceResource*
-(NSURLSessionTask*) getDeviceWithId: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;


/// List and search devices
/// Get a list of devices with optional filtering
///
/// @param filterMake Filter for devices with specified make (optional)
/// @param filterModel Filter for devices with specified model (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIPageResourceDeviceResource_*
-(NSURLSessionTask*) getDevicesWithFilterMake: (NSString*) filterMake
    filterModel: (NSString*) filterModel
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceDeviceResource_* output, NSError* error)) handler;


/// Update a device
/// 
///
/// @param device device
/// @param _id id
/// 
///  code:204 message:"No Content",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return JSAPIDeviceResource*
-(NSURLSessionTask*) updateDeviceWithDevice: (JSAPIDeviceResource*) device
    _id: (NSNumber*) _id
    completionHandler: (void (^)(JSAPIDeviceResource* output, NSError* error)) handler;



@end
