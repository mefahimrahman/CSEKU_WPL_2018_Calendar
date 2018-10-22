<link rel="stylesheet" href="resources/css/fullcalendar.css" />
<script src="resources/css/jquery.min.js"></script>
<script src="resources/css/jquery-ui.min.js"></script>
<script src="resources/css/moment.min.js"></script>
<script src="resources/css/fullcalendar.min.js"></script>




<!-- showing the calendar -->
<script>   
  $(document).ready(function() {
   var calendar = $('#calendar').fullCalendar({
    editable:true,
    header:{
     left:'prev,next today',
     center:'title',
     right:'month,agendaWeek,agendaDay'
    },
    events: './resources/t.php',
    selectable:true,
    selectHelper:true,
    select: function(start, end, allDay)
    {
     var title = prompt("Enter Event Title");
     if(title)
     {
      var start = $.fullCalendar.formatDate(start, "Y-MM-DD HH:mm:ss");
      var end = $.fullCalendar.formatDate(end, "Y-MM-DD HH:mm:ss");
      var discipline = prompt("Enter Event Discipline:");
      $.ajax({
       url:"insert.php",
       type:"POST",
       data:{title:title, start:start, end:end, discipline:discipline},
       success:function(data)
       {
        calendar.fullCalendar('refetchEvents');
          // alert(discipline);
       },
      error:function(data) {
          // alert(start);
      }
      })
     }
    },
   });
  });
   
  </script>
 
  <br>
  
  <div class="container">
    <div id="calendar"></div>
  </div>
   
     