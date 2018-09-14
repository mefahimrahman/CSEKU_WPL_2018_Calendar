<?php


include_once UTILITY.'class.util.inc';
include_once MODULES_USER.'bao/class.addeventbao.inc';


//here comes module dependency
$_UserBAO = new UserBAO();
$_RoleBAO = new RoleBAO();
$_DisciplineBAO = new DisciplineBAO();
$_DB = DBUtil::getInstance();
$_Log= LogUtil::getInstance();


/* saving a new user account*/
if(isset($_POST['request']))
{
	$User = new User();	

	$User->setID(strtolower($_DB->secureInput($_POST['eventName']))); 
	$User->setUniversityID($_DB->secureInput($_POST['eventDate']));
    $User->setFirstName($_DB->secureInput($_POST['eventStartTime']));
    $User->setMiddleName($_DB->secureInput($_POST['txtMiddleName']));
    $User->setLastName($_DB->secureInput($_POST['eventEndTime'])); 
	$User->setEmail(strtolower($_DB->secureInput($_POST['selectDiscipline']))); 

	

	$Result = $_UserBAO->newUserRequest($User);		

	if($Result->getIsSuccess()){
	   Util::printToast($Result->getResultObject());	
	}


}
?>