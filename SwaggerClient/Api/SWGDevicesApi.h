#import <Foundation/Foundation.h>
#import "SWGDeviceResource.h"
#import "SWGPageResourceDeviceResource_.h"
#import "SWGApi.h"

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



@interface SWGDevicesApi: NSObject <SWGApi>

extern NSString* kSWGDevicesApiErrorDomain;
extern NSInteger kSWGDevicesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a device
/// 
///
/// @param device device
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGDeviceResource*
-(NSURLSessionTask*) createDeviceUsingPOSTWithDevice: (SWGDeviceResource*) device
    completionHandler: (void (^)(SWGDeviceResource* output, NSError* error)) handler;


/// Delete a device
/// 
///
/// @param _id id
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSURLSessionTask*) deleteDeviceUsingDELETEWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a single device
/// 
///
/// @param _id id
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGDeviceResource*
-(NSURLSessionTask*) getDeviceUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGDeviceResource* output, NSError* error)) handler;


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
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceDeviceResource_*
-(NSURLSessionTask*) getDevicesUsingGETWithFilterMake: (NSString*) filterMake
    filterModel: (NSString*) filterModel
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceDeviceResource_* output, NSError* error)) handler;


/// Update a device
/// 
///
/// @param device device
/// @param _id id
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateDeviceUsingPUTWithDevice: (SWGDeviceResource*) device
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;



@end
